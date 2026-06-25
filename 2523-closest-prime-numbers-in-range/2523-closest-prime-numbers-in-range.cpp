class Solution {
public:
typedef vector<int> vi;
    vector<int> closestPrimes(int l, int r) {
        vi a;
        for(int i=l;i<=r;i++)
        {
            if(f(i)) a.push_back(i);
        }
        if(a.size()<2) return {-1,-1};
        vi res;int mini=INT_MAX;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]-a[i-1]<mini)
            {
                mini=a[i]-a[i-1] ;
                res={a[i-1],a[i]};
            }
        }
        return res;
    }
    private: bool f(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
         }
         return true;
    }
};