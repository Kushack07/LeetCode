class Solution {
public:
    int numSub(string s) {
        const int mod =1e9+7;
        typedef long long ll;
        int left =0,count = 0; 
        for(int right= 0 ; right<s.length();right++){
            if(s[right]=='0')left = right +1;
            else count = (count+(right-left+1)%mod)%mod;
        }
        return count;
    }
};