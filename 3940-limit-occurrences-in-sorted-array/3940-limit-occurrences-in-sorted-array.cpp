
class Solution {
public:
vector<int>f(vector<int>&a,int k)
{
    int n=a.size();vector<int>res;unordered_map<int,int>f;for(int i=0;i<n;i++) f[a[i]]++;
    for(int i=0;i<n;i++)
    {if(f.find(a[i])!=f.end()){res.push_back(a[i]);}
    f.erase(a[i]);
    }
    return res;
}
  
    vector<int> limitOccurrences(vector<int>& a, int k) {
        int n=a.size();vector<int> ans;unordered_map<int,int> mp;
        for(int i=0;i<n;i++)mp[a[i]]++;
        for(int i=0;i<n;i++)
            {
                if(mp.find(a[i])!=mp.end())
                {
                for(int j=0;j<min(mp[a[i]],k);j++)
                    {
                     ans.push_back(a[i]);
                    }
                }
                mp.erase(a[i]);
            }
        return ans;
    }
};
