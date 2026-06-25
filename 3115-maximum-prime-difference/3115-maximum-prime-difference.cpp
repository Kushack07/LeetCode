class Solution {
public:
int fx(int n){if(n<2) return 0;for(int i=2;i*i<=n;i++)if(!(n%i))return 0;return 1;}
    int maximumPrimeDifference(vector<int>& a) {
        int l=-1,f=-1,n=a.size();
        for(int i=0;i<n;i++) if(fx(a[i])) {f=i;break;}
        for(int i=n-1;i>=0;i--) if(fx(a[i])) {l=i;break;}
        return l-f;
    }
};