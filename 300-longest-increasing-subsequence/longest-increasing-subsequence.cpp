class Solution {
public:
    int dp[2501][2501];

    int func(vector<int>& a, int n, int i, int prev) {
        if (i == n) {
            return 0;
        }

        if (dp[i][prev + 1] != -1) {
            return dp[i][prev + 1];
        }

        // Don't take current element
        int c1 = func(a, n, i + 1, prev);

        // Take current element
        int c2 = 0;
        if (prev == -1 || a[i] > a[prev]) {
            c2 = 1 + func(a, n, i + 1, i);
        }

        return dp[i][prev + 1] = max(c1, c2);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        return func(nums, n, 0, -1);
    }
};