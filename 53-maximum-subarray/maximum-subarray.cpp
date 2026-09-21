class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //in this type of sliding window concept 
        //we neeed to find the bestending
        int n = nums.size();
        int bestending=nums[0];
        int current =nums[0];
        for(int i = 1;i < n;i++){
            current = max(nums[i], current+nums[i]);
            bestending = max(bestending,current);
        }
        return bestending;
    }
};