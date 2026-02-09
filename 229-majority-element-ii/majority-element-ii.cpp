class Solution {
public:
vector<int>x;
    vector<int> majorityElement(vector<int>& a) {
        int n=a.size();unordered_map<int,int>mp;for(int i:a) mp[i]++;
        for(auto i:mp){if(i.second>(n/3)) x.push_back(i.first);}
        return x; 
    }
};