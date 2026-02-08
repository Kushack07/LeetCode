class Solution {
public:
    vector<vector<int>> generate(int a) {
        vector<vector<int>>x(a);
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i) x[i].push_back(1);
                else{
                    int s=x[i-1][j]+x[i-1][j-1];
                    x[i].push_back(s);
                    cout<<s<<"\n";
                }
            }
        }
        return x;
    }
};