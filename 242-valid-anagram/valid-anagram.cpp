class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m){
            return false;
        }
        unordered_map<int,int> mp;
        unordered_map<int,int> ans;
        for(int i =0 ; i < n ;i++){
            mp[s[i]]++;
        }
        for(int j =0; j< m ; j++){
            ans[t[j]]++;
        }
        for(auto x:mp){
            if(x.second != ans[x.first]){
                return false;
            }
        }
        return true;
    }
};