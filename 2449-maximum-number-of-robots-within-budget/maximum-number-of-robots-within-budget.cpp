class Solution {
public:
typedef long long ll;

priority_queue<pair<int,int>>pq;
int maxi(int j)
{
    while(!pq.empty()&&pq.top().second<=j) pq.pop();
    if(pq.empty()) return 0;
    return pq.top().first;
}
    int maximumRobots(vector<int>& ct, vector<int>& rc, long long bug) {
     int ans=0,j=-1;
     ll s=0;
     for(int i=0;i<rc.size();i++)
     {
    s+=rc[i];
    pq.push({ct[i],i});
    while(maxi(j)+(ll)(i-j)*s>bug)
        s-=rc[++j];
    ans=max(ans,i-j);
     }   
     return ans;
    }
};