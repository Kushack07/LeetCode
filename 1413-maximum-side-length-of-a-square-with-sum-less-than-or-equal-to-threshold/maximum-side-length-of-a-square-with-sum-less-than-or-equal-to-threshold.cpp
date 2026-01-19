class Solution {
public:
int ans=0,sum=0;
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>p(n+1,vector<int>(m+1));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                p[i][j]=mat[i-1][j-1]+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
            }
        }
        for(int z=1;z<=min(n,m);z++)
        {
            for(int i=z;i<=n;i++)
            {
                for(int j=z;j<=m;j++)
                {
                sum=p[i][j]+p[i-z][j-z]-p[i-z][j]-p[i][j-z];
                if(sum<=threshold)
                {
                    ans=z;
                }
                }
            }
        }
        return ans;
    }
};