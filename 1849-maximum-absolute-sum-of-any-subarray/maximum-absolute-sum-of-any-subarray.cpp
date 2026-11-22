class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0;
        int minSum = 0;

        int maxEnding = 0;
        int minEnding = 0;

        for (int i = 0; i < nums.size(); i++) {
            maxEnding = max(nums[i], maxEnding + nums[i]);
            minEnding = min(nums[i], minEnding + nums[i]);

            maxSum = max(maxSum, maxEnding);
            minSum = min(minSum, minEnding);
        }

        return max(maxSum, abs(minSum));
    }
};