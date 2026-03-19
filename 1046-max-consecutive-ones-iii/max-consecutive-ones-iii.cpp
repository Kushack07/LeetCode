class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0, high = 0;
        int zeroCount = 0;
        int maxLen = 0;

        while (high < nums.size()) {
            if (nums[high] == 0) {
                zeroCount++;
            }

            while (zeroCount > k) {
                if (nums[low] == 0) {
                    zeroCount--;
                }
                low++;
            }

            maxLen = max(maxLen, high - low + 1);
            high++;
        }

        return maxLen;
    }
};