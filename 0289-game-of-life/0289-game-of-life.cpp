class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();

        // Directions for 8 neighbors
        vector<vector<int>> dirs = {
            {-1,-1},{-1,0},{-1,1},
            {0,-1},        {0,1},
            {1,-1},{1,0},{1,1}
        };

        // First pass: apply rules with temporary states
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                int liveNeighbors = 0;

                for(auto &d : dirs) {
                    int x = i + d[0];
                    int y = j + d[1];

                    if(x >= 0 && x < rows && y >= 0 && y < cols) {
                        if(abs(board[x][y]) == 1)
                            liveNeighbors++;
                    }
                }

                // Rule 1 & 3: Live cell dies
                if(board[i][j] == 1 && (liveNeighbors < 2 || liveNeighbors > 3))
                    board[i][j] = -1;

                // Rule 4: Dead cell becomes alive
                if(board[i][j] == 0 && liveNeighbors == 3)
                    board[i][j] = 2;
            }
        }

        // Second pass: finalize states
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(board[i][j] > 0)
                    board[i][j] = 1;
                else
                    board[i][j] = 0;
            }
        }
    }
};