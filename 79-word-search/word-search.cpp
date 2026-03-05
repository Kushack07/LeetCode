class Solution {
public:
int n,m;
vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
bool find(vector<vector<char>>&b,string w,int i,int j,int idx)
{
    if(idx==w.size()) return true;
    if(i<0||j<0||i>=m||j>=n||b[i][j]!=w[idx]||b[i][j]=='$') return false;
    char temp=b[i][j];
    b[i][j]='$';
    for(auto &d:dir)
    {
        int xi=i+d[0],yj=j+d[1];
        if(find(b,w,xi,yj,idx+1)) return true;
    }
    b[i][j]=temp;
    return false;
}
    bool exist(vector<vector<char>>& b, string w) {
        m=b.size(),n=b[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(find(b,w,i,j,0))
                    return true;
            }
        }
        return false;
    }
};