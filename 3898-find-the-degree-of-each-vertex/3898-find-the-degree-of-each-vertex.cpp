class Solution {
public:
typedef vector<int> vi;
    vector<int> findDegrees(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();
        vi v;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<m;j++)
            {
                sum+=a[i][j];
            }
            v.push_back(sum);
        }
        return v;
    }
};