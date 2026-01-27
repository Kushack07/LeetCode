class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;

        vector<vector<bool>> visited(n, vector<bool>(m, 0));
        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, -1, 1};
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    cnt++;
                    q.push({i, j});
                    visited[i][j] = true;

                    while (!q.empty()) {
                        auto [x, y] = q.front();
                        q.pop();

                        for (int d = 0; d < 4; d++) {
                            int nr = x + dx[d];
                            int nc = y + dy[d];

                            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                                !visited[nr][nc] && grid[nr][nc] == '1') {
                                visited[nr][nc] = true;
                                q.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};