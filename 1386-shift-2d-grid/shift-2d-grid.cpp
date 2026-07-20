class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        while (k--) {
            vector<vector<int>> temp(m, vector<int>(n));

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {

                    // Normal right shift
                    if (j != n - 1) {
                        temp[i][j + 1] = grid[i][j];
                    }
                    // Last column but not last row
                    else if (i != m - 1) {
                        temp[i + 1][0] = grid[i][j];
                    }
                    // Last element of the grid
                    else {
                        temp[0][0] = grid[i][j];
                    }
                }
            }

            grid = temp;
        }

        return grid;
    }
};