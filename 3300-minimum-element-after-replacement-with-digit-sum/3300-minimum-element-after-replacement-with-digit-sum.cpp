class Solution {
public:
int ds(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
    int minElement(vector<int>& a) {
        int mini=INT_MAX;
        for(int i:a)
        {
            int cur=ds(i);
            mini=min(mini,cur);
        }
        return mini;
    }
};