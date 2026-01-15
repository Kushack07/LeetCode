class Solution {
public:
int solve(vector<int>a)
{
    sort(a.begin(),a.end());
    int maxi=1,len=1;
    int n=a.size();
    for(int i=0;i<n-1;i++)
    {
        len=1+(-(a[i]+1==a[i+1])&len);
        maxi=max(maxi,len);
    }
    return maxi;
}
    int maximizeSquareHoleArea(int n, int m, vector<int>& hb, vector<int>& vb) {
        int res=1+min(solve(hb),solve(vb));
        return res*res;
    }
};