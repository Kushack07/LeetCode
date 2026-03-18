class Solution {
public:
    int countSubmatrices(vector<vector<int>>& a, int k) {
        int x=0,m=a.size(),n=a[0].size();
        vector<vector<int>>p(m+1,vector<int>(n+1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
    p[i+1][j+1]=a[i][j]+p[i][j+1]+p[i+1][j]-p[i][j];
    if(p[i+1][j+1]<=k)
    {
        x++;
    }
            }
        }
    return x;
    }
};