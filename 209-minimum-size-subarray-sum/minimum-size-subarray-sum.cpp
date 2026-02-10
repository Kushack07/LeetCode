class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0 , j=0 ; 
        int sum =0 ; 
        int minL = INT_MAX;
        while(j<n)
        {
            sum =sum + nums[j];
            while(sum >= target)
            {
                minL = min(minL,j-i+1);
                sum = sum - nums[i];
                i++;
            }
            j++;
        }
        if(minL == INT_MAX)return 0 ; 
        return minL;
    }
};