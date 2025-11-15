class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;  // no positive product can be < 1

        int n = nums.size();
        int left = 0;
        long long product = 1;
        int count = 0;

        for (int right = 0; right < n; right++) {
            product *= nums[right];

            // Shrink window until product < k
            while (product >= k && left <= right) {
                product /= nums[left];
                left++;
            }

            // All subarrays ending at right and starting from [left..right] are valid
            count += (right - left + 1);
        }

        return count;
    }
};