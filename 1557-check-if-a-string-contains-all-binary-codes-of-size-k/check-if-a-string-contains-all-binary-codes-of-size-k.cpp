class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        if(n<k) return false;
        int need=pow(2,k);//s^k
        int m=need-1;
        int h=0;
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
            h=((h<<1)&m)|(s[i]-'0');
            if(i>=k-1)
            {
            st.insert(h);
            }
            if(st.size()==need)
            {
                return true;
            }
        }
        return false;
    }
};