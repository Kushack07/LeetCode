class Solution {
public:
typedef vector<int> vi;
typedef long long ll;
typedef vector<vector<int>> vii;
typedef double d;
static bool cmp(const vi &a,const vi &b)
{
d p=1.0*a[0]/a[1],q=1.0*b[0]/b[1];
return p<q;
};

vi kthSmallestPrimeFraction(vector<int>& a, int k) {
    //     vi res(2);
    //     int n=a.size();
    //     double l=0.0,r=1.0;
    //     while(r-l>1e-9)
    //     {
    //         double mid=l+(r-l)/2.0;
    //         double maxi=0.0;
    //         int total=0,num=0,den=0;
    //         int j=1;
    //         for(int i=0;i<n;i++)
    //         {
    //             while(j<n && a[i]>mid*a[j]) j++;
    //             total+=(n-j);
    //         if(j<n && maxi<(double)a[i]/a[j])
    //         {
    //             maxi=(double)a[i]/a[j];
    //             num=a[i];
    //             den=a[j];
    //         }
    //         }
    //         if(total==k)
    //         {
    //             res[0]=num;
    //             res[1]=den;
    //             break;
    //         }
    //         else if(total>k)
    //         {
    //             r=mid;
    //         }
    //         else{
    //             l=mid;
    //         }
    //     }
    //     return res;
    //2nd method;
    vii mp;
    int n=a.size();
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            mp.push_back({a[j],a[i]});
        }
    }
    sort(mp.begin(),mp.end(),cmp);
    return mp[k-1];
    }
};