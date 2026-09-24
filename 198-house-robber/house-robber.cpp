class Solution {
public:
    int rob(vector<int>& nums, int i, int free, vector<vector<int>>& dp) {
        int n = nums.size();

        if (i == n) return 0;

        if (dp[i][free] != -1) return dp[i][free];

        if (free == 0) {
            // Previous house was robbed, so skip this one
            return dp[i][free] = rob(nums, i + 1, 1, dp);
        }

        // We are free to rob or skip
        int take = nums[i] + rob(nums, i + 1, 0, dp);
        int skip = rob(nums, i + 1, 1, dp);

        return dp[i][free] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return rob(nums, 0, 1, dp);
    }
};