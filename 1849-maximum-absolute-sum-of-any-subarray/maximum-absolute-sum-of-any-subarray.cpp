class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n= nums.size();
        int maxending = 0;
        int minending = 0 ;
        int minsum = 0;
        int maxsum = 0;
        for(int x:nums){
            maxending=max(x,maxending+x);
            maxsum =max(maxsum,maxending);
            minending =min(x,minending+x);
            minsum = min (minsum ,minending);
        }
        return max(abs(maxsum),abs(minsum));
    }
};