class Solution {
public:
const int I=1e9+7;
    int minSubArrayLen(int t, vector<int>& a) {
        int n=a.size(),ans=I,sum=0,l=0;
        for(int i=0;i<n;i++)
        {
           sum+=a[i];
           while(sum>=t)
           {
            ans=min(ans,i-l+1);
            sum=sum-a[l];
            l++;
           }      
        }
        return ans==I ? 0:ans;
    }
};