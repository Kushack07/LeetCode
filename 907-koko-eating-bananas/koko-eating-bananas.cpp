class Solution {
public:
typedef long long ll;
bool ok(vector<int>&a,int k,int m)
{
    ll ans=0;
    for(int i=0;i<a.size();i++)
        ans+=(a[i]+m-1)/m;
    return ans<=k;
}
int bs(vector<int>&a,int k)
{
    int l=1,h=*max_element(a.begin(),a.end()),res=0;
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(ok(a,k,m))
        {
            h=m-1;
            res=m;
        }
        else{
            l=m+1;
        }
    }
    return res;
}
    int minEatingSpeed(vector<int>& a, int h) {
        return bs(a,h);
    }
};