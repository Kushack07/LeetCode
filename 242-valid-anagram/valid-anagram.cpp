class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char,int>mp;
        for(char c : s ){
            mp[c]++;
        }
        for(char x : t){
            mp[x]--;
        }
        for(auto y:mp){
            if(y.second != 0){
                return false;
            }
        }
        return true;
    }
};