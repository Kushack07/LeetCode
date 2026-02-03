class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        int r[9][9]={false},c[9][9]={false},b[9][9]={false};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
            if(a[i][j]!='.')
            {
            int n=a[i][j]-'1';
            int bidx=(i/3)*3+(j/3);
if(b[bidx][n]||r[i][n]||c[j][n]) return false;
b[bidx][n]=r[i][n]=c[j][n]=true;
            }
            }
        }
        return true;
    }
};