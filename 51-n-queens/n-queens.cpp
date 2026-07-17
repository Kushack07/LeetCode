class Solution {
public:
    vector<vector<string>> ans;

    bool isSafe(int row, int col, vector<string>& board, int n) {

        // Check upper column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q')
                return false;
        }

        // Upper left diagonal
        for (int i = row - 1, j = col - 1;
             i >= 0 && j >= 0;
             i--, j--) {

            if (board[i][j] == 'Q')
                return false;
        }

        // Upper right diagonal
        for (int i = row - 1, j = col + 1;
             i >= 0 && j < n;
             i--, j++) {

            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void solve(int row, vector<string>& board, int n) {

        // Base case
        if (row == n) {
            ans.push_back(board);
            return;
        }

        // Try every column
        for (int col = 0; col < n; col++) {

            if (isSafe(row, col, board, n)) {

                // Choose
                board[row][col] = 'Q';

                // Explore
                solve(row + 1, board, n);

                // Undo (Backtrack)
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n, string(n, '.'));

        solve(0, board, n);

        return ans;
    }
};