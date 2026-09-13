class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int> ans; 
        int cnt =0 ;
        bool mid =false;
        for(char c:s){
            ans[c]++;
        }
        for(auto x:ans){
            cnt+= (x.second/2)*2;
            if(x.second%2==1){
                mid = true;
            }
        }
        if(mid) cnt++;
        return cnt;
    }
};