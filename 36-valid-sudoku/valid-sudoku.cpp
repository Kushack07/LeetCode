class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row[9],cols[9],boxes[9];
        int n = board.size();
        for(int i=0;i<9;i++){
            for(int j =0;j<9;j++){
                char c = board[i][j];
                if(c=='.')continue;
                int boxid = (i/3)*3+(j/3);
                if(row[i].count(c)||cols[j].count(c)||boxes[boxid].count(c))return false;
                row[i].insert(c);
                cols[j].insert(c);
                boxes[boxid].insert(c);
            }
        }
        return true;
    }
};