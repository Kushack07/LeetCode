class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int high = 0;
        int sum = 0;
        int msize = INT_MAX;
        int n = nums.size();

        while (high < n) {
            sum += nums[high];

            while (sum >= target) {
                msize = min(msize, high - low + 1);
                sum -= nums[low];
                low++;
            }

            high++;
        }

        return msize == INT_MAX ? 0 : msize;
    }
};