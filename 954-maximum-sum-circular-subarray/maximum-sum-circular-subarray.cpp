class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxEnding = 0, minEnding = 0;
        int maxSum = nums[0], minSum = nums[0];

        for (int x : nums) {
            total += x;

            maxEnding = max(x, maxEnding + x);
            maxSum = max(maxSum, maxEnding);

            minEnding = min(x, minEnding + x);
            minSum = min(minSum, minEnding);
        }

        // If all numbers are negative, max circular = normal max
        if (maxSum < 0) return maxSum;

        // Otherwise: max of (normal max) or (total - min subarray)
        return max(maxSum, total - minSum);
    }
};