class Solution {
public:
    bool isPalindrome(string s) {
        string dub = "";
        for(char c :s ){
            if(isalnum(c)){
                dub +=tolower(c);
            }
        }
        string rev_dub = dub ; 
        reverse(rev_dub.begin(),rev_dub.end());
        return rev_dub == dub;
    }
};