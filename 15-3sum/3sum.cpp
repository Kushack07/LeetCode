class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n=a.size();
        vector<vector<int>>res;
        unordered_map<int,int>mp;
        sort(a.begin(),a.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && a[i]==a[i-1])
            {
                continue;
            }
            unordered_set<int>seen;
            for(int j=i+1;j<n;j++)
            {
                int tar=-a[i]-a[j];
                if(seen.count(tar))
                {
                    res.push_back({a[i],tar,a[j]});
                    while(j+1<n && a[j]==a[j+1])
                    {
                        j++;
                    }
                }
                seen.insert(a[j]);
            }
        }
        return res;
        
    }
};