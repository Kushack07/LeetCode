class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int be = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            be = max(nums[i], be + nums[i]);
            ans = max(ans, be);
        }

        return ans;
    }
};