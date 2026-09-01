class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int n = classroom.size();
        int m = classroom[0].size();

        int totalL = 0;
        int sx = 0, sy = 0;

        // Find S and count L
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (classroom[i][j] == 'S') {
                    sx = i;
                    sy = j;
                }
                if (classroom[i][j] == 'L') {
                    totalL++;
                }
            }
        }

        // No litter
        if (totalL == 0)
            return 0;

        queue<tuple<int,int,int,int>> q;

        // x, y, current energy, collected litter
        q.push({sx, sy, energy, 0});

        // visited[x][y][energy][mask]
        vector<vector<vector<vector<bool>>>> visited(
            n,
            vector<vector<vector<bool>>>(
                m,
                vector<vector<bool>>(
                    energy + 1,
                    vector<bool>(1 << totalL, false)
                )
            )
        );

        visited[sx][sy][energy][0] = true;

        int moves = 0;

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        // Give every L a bit number
        vector<vector<int>> id(n, vector<int>(m, -1));
        int k = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (classroom[i][j] == 'L') {
                    id[i][j] = k++;
                }
            }
        }

        while (!q.empty()) {

            int sz = q.size();

            while (sz--) {

                auto [x, y, e, mask] = q.front();
                q.pop();

                // Collected all litter
                if (mask == (1 << totalL) - 1)
                    return moves;

                for (int d = 0; d < 4; d++) {

                    int nx = x + dx[d];
                    int ny = y + dy[d];

                    // Outside grid
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;

                    // Wall
                    if (classroom[nx][ny] == 'X')
                        continue;

                    // Need energy to move
                    if (e == 0)
                        continue;

                    int ne = e - 1;
                    int nmask = mask;

                    // Litter
                    if (classroom[nx][ny] == 'L') {
                        nmask |= (1 << id[nx][ny]);
                    }

                    // Recharge
                    if (classroom[nx][ny] == 'R') {
                        ne = energy;
                    }

                    if (!visited[nx][ny][ne][nmask]) {

                        visited[nx][ny][ne][nmask] = true;

                        q.push({
                            nx,
                            ny,
                            ne,
                            nmask
                        });
                    }
                }
            }

            moves++;
        }

        return -1;
    }
};