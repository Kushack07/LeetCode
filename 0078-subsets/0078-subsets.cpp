class Solution {
public:
vector<vector<int>>res;
    vector<vector<int>> subsets(vector<int>& a) {
        int n=a.size(),sub=1<<n;
        for(int i=0;i<sub;i++)
        {
            vector<int>x;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    x.push_back(a[j]);
                }
            }
            res.push_back(x);
        }
        return res;
    }
};