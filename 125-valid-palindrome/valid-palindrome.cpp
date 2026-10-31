class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for(char c : s ){
            if(isalnum(c)){
                clean +=tolower(c);
            }
        }
        string rev_cle = clean;
        reverse(rev_cle.begin(),rev_cle.end());
        return clean == rev_cle;
    }
};