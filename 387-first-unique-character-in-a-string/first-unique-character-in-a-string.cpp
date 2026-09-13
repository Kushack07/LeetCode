class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>ans;
        for(char c :s){
            ans[c]++;
        }
        int cnt = 0; 
        int n = s.size();
        for(int i =0 ; i < n ;i++){
            if (ans[s[i]]==1){
                return i; 
            }
        }
        return -1;
    }
};