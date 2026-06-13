class Solution {
public:
typedef long long ll;
    int minOperations(vector<int>& a, int k) {
        int ans=0;
        priority_queue<ll,vector<ll>,greater<>>pq(a.begin(),a.end());
        while(pq.top()<k)
        {
        ll x=pq.top();pq.pop();
        ll y=pq.top();pq.pop();
        pq.push(2*x+y);
        ans++;
        }
        return ans;
    }
};