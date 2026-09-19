class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending = nums[0];
        int curr = nums[0];
        int n = nums.size();
        for(int i =1; i < n ;i++){
            curr=max(curr+nums[i],nums[i]);
            bestending = max(bestending,curr);
        }
        return bestending;
    }
};