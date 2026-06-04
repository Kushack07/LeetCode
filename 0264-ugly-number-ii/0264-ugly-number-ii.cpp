class Solution {
public:
typedef long long ll;
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
        return f(n);
    }
};