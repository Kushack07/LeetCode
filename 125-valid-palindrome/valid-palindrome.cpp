class Solution {
public:
    bool isPalindrome(string s) {
        int st =0 ;
        int lt = s.size()-1;
        while(st<=lt){
            if(!isalnum(s[st])){st++;continue;}
            if(!isalnum(s[lt])){lt--;continue;}
            if(tolower(s[st])!=tolower(s[lt])) return false;
            else{
                st++;
                lt--;
            }
        }
        return true;
    }
};