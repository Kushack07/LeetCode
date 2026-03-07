class Solution {
public:
    int minFlips(string s) {
        int cnt=0,n=s.size();
        string pat="01";
        for(int i=0;i<s.size();i++) if(s[i]!=pat[i&1])cnt++;
        int mini=min(cnt,n-cnt);
        for(int i=0;i<n;i++)
        {
            if(s[i]!=pat[i&1]) cnt--;
            if(s[i]!=pat[(i+n)&1])
            {
                cnt++;
            }
            mini=min({mini,cnt,n-cnt});
        }
        return mini;
    }
};