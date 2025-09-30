class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();

        // Keep reducing until only one element remains
        while (n > 1) {
            for (int i = 0; i < n - 1; i++) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;  // update in place
            }
            n--; // reduce size by 1
        }

        return nums[0]; // final single element
    }
};