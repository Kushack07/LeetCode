class Solution {
public:
    int maxOperations(string s) {
int ans=0,one=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')one++;
            else if(s[i+1]!='0' ||i==s.size()){{
                ans+=one;
            }}
        }
        return ans;
    }
};