class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        ranges::sort(nums);
        vector<int> dp(nums.back() + 2);  // dp[x]: the longest run ending at x
        for (int x : nums) {
            dp[x + 1] = dp[x] + 1;  // bump
            dp[x] = dp[x - 1] + 1;  // keep
        }
        return ranges::max(dp);
    }
};