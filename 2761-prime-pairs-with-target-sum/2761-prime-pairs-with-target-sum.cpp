class Solution {
public:
typedef vector<vector<int>> vii;
bool f(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
    vector<vector<int>> findPrimePairs(int n) {
        vii ans;
        for(int i=0;i<=n/2;i++)
        {
            if(f(i) && f(n-i)) ans.push_back({i,n-i});
        }
        return ans;
    }
};