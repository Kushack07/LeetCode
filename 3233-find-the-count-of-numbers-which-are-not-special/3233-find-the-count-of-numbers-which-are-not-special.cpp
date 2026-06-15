class Solution {
public:
bool isprime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
    int nonSpecialCount(int l, int r) {
    //    int sq=sqrt(r);
    //    vector<int>ans(sq+1,1);
    //    ans[1]=0;
    //    for(int i=2;i<=sq;i++)
    //    {
    //     if(ans[i]==1){
    //         for(int j=i*i;j<=sq;j+=i)
    //         {
    //             ans[j]=0;
    //         }
    //     }
    //    }
    //    return accumulate(ans.begin(),ans.end(),0);
    int l1=sqrt(l),l2=sqrt(r);
    int sub=0;
    for(int i=l1;i*i<=r;i++)
    {
    if(isprime(i) && i*i>=l && i*i<=r) ++sub;
    }
    return (r-l+1)-sub;
    }
};