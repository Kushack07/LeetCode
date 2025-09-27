class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> mp;      // char -> freq
        for(char ch : s) mp[ch]++;

        unordered_map<int,string> grp;   // freq -> chars
        for(auto &p : mp) grp[p.second] += p.first;

        int mxSz = 0, mxF = 0;
        for(auto &g : grp) {
            if(g.second.size() > mxSz || 
              (g.second.size() == mxSz && g.first > mxF)) {
                mxSz = g.second.size();
                mxF = g.first;
            }
        }
        return grp[mxF];
    }
};