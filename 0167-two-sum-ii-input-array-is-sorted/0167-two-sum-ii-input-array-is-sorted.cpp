class Solution {
public:
    vector<int> twoSum(vector<int>&a, int t) {
       unordered_map<int,int>mp;
       for(int i=0;i<a.size();i++)
       {
        int comp=t-a[i];
        if(mp.find(comp)!=mp.end())
        {
            return {mp[comp]+1,i+1};
        }
        mp[a[i]]=i;

       }
       return {};
    }

};