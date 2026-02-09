class Solution {
public:
typedef long long ll;
    long long beautifulSubarrays(vector<int>& a) {
        ll px=0;
        int x=0;
        unordered_map<int,ll>mp;
        mp[0]=1;
        for(int i:a)
        {
            x^=i;
            cout<<"x:"<<x<<"\n";
            px+=mp[x];
            mp[x]++;

        }
        return px;
    }
};