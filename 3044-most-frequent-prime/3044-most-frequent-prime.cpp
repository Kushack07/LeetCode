class Solution {
public:
    int mostFrequentPrime(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size(),x[]={-1,-1,-1,0,0,1,1,1},y[]={-1,0,1,-1,1,-1,0,1};
        map<int,int>f;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int d=0;d<8;d++){
                int r=i,c=j,cur=0;
        while(r>=0&&c>=0&&r<n&&c<m)
        {
            cur=cur*10+a[r][c];
        if(cur>10&& fx(cur)) f[cur]++;
        r+=x[d];
        c+=y[d];
        }
            }
            }
        }
        int mx=0,ans=-1;
        for(auto &it:f)
        {
            int pr=it.first,fr=it.second;
            if(mx<fr){
                mx=fr;
                ans=pr;
            }
            else if(fr==mx)
            {
                ans=max(ans,pr);
            }
        }
        return ans;

    }
private:bool fx(int n){if(n<2) return false;for(int i=2;i*i<=n;i++)if(!(n%i))return false; return true;}
};