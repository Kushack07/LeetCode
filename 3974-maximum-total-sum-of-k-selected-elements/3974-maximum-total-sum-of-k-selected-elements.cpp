class Solution {
public:
typedef long long ll;
    long long maxSum(vector<int>& a, int k, int mul) {
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        ll res=0;
        for(int i=0;i<k;i++)
        {
            int x=max(1,mul-i);
            res+=1LL*x*a[i];
        }
        return res;
    }
};