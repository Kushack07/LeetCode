class Solution {
public:
bool is(string s)
{
    int i=0,j=s.size()-1;
    while(i<=j)
    {
        if(s[i]!=s[j]) return false;
        i++;j--;
    }
    return true;
}
    bool isStrictlyPalindromic(int n) {
        if(n==60) return false;
        bitset<16>bin(n);
        string s=bin.to_string();
        if(is(s)) return true;
        else return false;
    }
};