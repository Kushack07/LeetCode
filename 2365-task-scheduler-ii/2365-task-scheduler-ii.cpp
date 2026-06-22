class Solution {
public:
typedef long long ll;
    long long taskSchedulerII(vector<int>& a, int s) {
        map<int,ll>f;
        ll cnt=0;
        for(int i:a)
        {
            cnt++;
            if(f.count(i) && cnt-f[i]<=s)
            {
                cnt=f[i]+s+1;
            }
            f[i]=cnt;
        }
        return cnt;
    }
};