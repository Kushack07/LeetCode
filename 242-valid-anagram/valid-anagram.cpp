class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(char v:t){
            mp[v]--;
        }
        for(auto g:mp){
            if(g.second != 0){
                return false;
            }
        }
        return true;
    }
};