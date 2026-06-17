class Solution {
public:
static bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.second!=b.second) return a.second<b.second;
    return a.first>b.first;
}
    vector<int> frequencySort(vector<int>& a) {
        map<int,int>f;for(int i:a)f[i]++;
        vector<pair<int,int>>x(f.begin(),f.end());
        sort(x.begin(),x.end(),cmp);
        vector<int>r;
        for(auto &i:x)
        {
            r.insert(r.end(),i.second,i.first);
        }
        return r;
    }
};