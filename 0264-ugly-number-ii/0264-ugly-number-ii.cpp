class Solution {
public:
typedef long long ll;

int f2(int n){
    vector<int>a(n);a[0]=1;
    int i2,i3,i5,m2,m3,m5;
    i2=i3=i5=0;
    m2=2,m3=3,m5=5;
    for(int i=1;i<n;i++)
    {
        int cur=min(m2,min(m3,m5));
        a[i]=cur;
        if(cur==m2) m2=a[++i2]*2;
        if(cur==m3) m3=a[++i3]*3;
        if(cur==m5) m5=a[++i5]*5;
    }
    return a[n-1];
}
int f(int x)
{
    priority_queue<ll,vector<ll>,greater<ll>>q;
    q.push(1l);
    unordered_set<ll>vis{{1l}};
    ll res=1;vector<int>f={2,3,5};
    while(x--){
        res=q.top();q.pop();
        for(int &it:f){
            ll nxt=res*it;
            if(!vis.count(nxt))
            {
                vis.insert(nxt);
                q.push(nxt);
            }
        }
    }
    return (int)res;
}
    int nthUglyNumber(int n) {
        return f2(n);
    }
};