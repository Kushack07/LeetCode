class Solution {
public:
    int splitArray(vector<int>& a, int k) {
        long long l=*max_element(a.begin(),a.end()), r=accumulate(a.begin(),a.end(),0LL);
        while(l<r){
            long long m=(l+r)/2,s=0; int c=1;
            for(int x:a)
                if(s+x>m) s=x,c++;
                else s+=x;
            if(c<=k) r=m;
            else l=m+1;
        }
        return l;
    }
};