class Solution {
public:
typedef long long ll;
int cntpar(vector<int>&a,int l,int m,int h)
{
    int cnt=0;
    int r=m+1;
    for(int i=l;i<=m;i++)
    {
        while(r<=h && (ll)a[i]>2LL * a[r])
        {
            r++;
        }
        cnt+=(r-(m+1));
    }
    return cnt;
}
void merge(vector<int>&a,int l,int m,int h)
 
 {
    vector<int>res;
    int lo=l;
    int r=m+1;
    while(lo<=m && r<=h)
    {
        if(a[lo]<=a[r]) res.push_back(a[lo++]);
        else res.push_back(a[r++]);
    }
    while(lo<=m) res.push_back(a[lo++]);
    while(r<=h) res.push_back(a[r++]);
    for(int i=l;i<=h;i++ ) a[i]=res[i-l];
 } 
 int ms(vector<int>&a,int l,int h )

{
    int cnt=0;
    if(l>=h) return cnt;
    int mid=l+(h-l)/2;
    cnt+=ms(a,l,mid);
    cnt+=ms(a,mid+1,h);
    cnt+=cntpar(a,l,mid,h);
    merge(a,l,mid,h);
    return cnt;
} 
  int reversePairs(vector<int>& a) {
     return ms(a,0,a.size()-1);   
    }
};