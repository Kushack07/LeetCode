class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int current = nums[0];
        int maximum = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            // Either:
            // 1. Continue the previous subarray
            // 2. Start a new subarray here

            current = max(current + nums[i], nums[i]);

            // Keep track of the best sum seen so far
            maximum = max(maximum, current);
        }

        return maximum;
    }
};