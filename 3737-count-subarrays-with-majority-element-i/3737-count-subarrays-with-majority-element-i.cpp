class Solution {
public:
    int countMajoritySubarrays(vector<int>& a, int t) {
        multiset<int>st;
        st.insert(0);int cs=0,cnt=0;
        for(int i=0;i<a.size();i++)
        {
            cs+=(a[i]==t) ? 1:-1;
            auto it=st.lower_bound(cs);
            cnt+=distance(st.begin(),it);
            st.insert(cs);
        }
        return cnt;
    }
};