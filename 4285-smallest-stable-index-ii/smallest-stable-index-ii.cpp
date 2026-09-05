class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> mine(n);
        mine[n - 1] = nums[n - 1];

        // minimum from i to n-1
        for (int i = n - 2; i >= 0; i--) {
            mine[i] = min(mine[i + 1], nums[i]);
        }

        int maxe = 0;

        for (int i = 0; i < n; i++) {
            // maximum from 0 to i
            maxe = max(maxe, nums[i]);

            int diff = maxe - mine[i];

            if (diff <= k)
                return i;
        }

        return -1;
    }
};