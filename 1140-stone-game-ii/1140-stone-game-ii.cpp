class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();

        // suffix[i] = stones from i to n-1
        vector<int> suffix(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + piles[i];
        }

        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        function<int(int, int)> solve = [&](int i, int M) {
            // All remaining stones can be taken
            if (i + 2 * M >= n)
                return suffix[i];

            if (dp[i][M] != -1)
                return dp[i][M];

            int ans = 0;

            // Take X piles
            for (int X = 1; X <= 2 * M; X++) {
                // Current player gets X piles,
                // opponent gets the best possible result afterwards.
                ans = max(ans,
                          suffix[i] - solve(i + X, max(M, X)));
            }

            return dp[i][M] = ans;
        };

        return solve(0, 1);
    }
};