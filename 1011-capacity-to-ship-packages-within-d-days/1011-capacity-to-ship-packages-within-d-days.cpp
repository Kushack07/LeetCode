class Solution {
public:
typedef vector<int> vi;
bool f(vi &a,int day,int mid)
{
    int need=1,cur=0;
    for(int i:a)
    {
        if(cur+i>mid)
        {
            need++;
            cur=i;
        }
        else{
            cur+=i;
        }
    }
    return need<=day;
}
    int shipWithinDays(vector<int>& a, int day) {
        int l=0,r=0;
        for(int i:a)
        {
            l=max(l,i);
            r+=i;
        }
        int ans=r;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(f(a,day,mid))
            {
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};