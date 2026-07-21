class Solution {
public:
    int maxProduct(vector<int>& nums) {

        // maxi = Maximum product of a subarray ending at current index
        int maxi = nums[0];

        // mini = Minimum product of a subarray ending at current index
        // Needed because multiplying two negative numbers gives a positive.
        int mini = nums[0];

        // Stores the maximum product found so far.
        int ans = nums[0];

        // Traverse the array from the second element
        for (int i = 1; i < nums.size(); i++) {

            // If current number is negative,
            // maximum becomes minimum and minimum becomes maximum.
            if (nums[i] < 0)
                swap(maxi, mini);

            // Either:
            // 1. Start a new subarray from nums[i]
            // 2. Extend the previous maximum product subarray
            maxi = max(nums[i], maxi * nums[i]);

            // Either:
            // 1. Start a new subarray from nums[i]
            // 2. Extend the previous minimum product subarray
            mini = min(nums[i], mini * nums[i]);

            // Update the overall maximum product
            ans = max(ans, maxi);
        }

        // Return the maximum product of any subarray
        return ans;
    }
};