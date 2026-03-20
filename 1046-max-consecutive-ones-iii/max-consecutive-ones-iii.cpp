class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0;
        int maxLen = 0;
        int zero = 0;

        for (int high = 0; high < nums.size(); high++) {
            
            if (nums[high] == 0) {
                zero++;
            }

            // If zeros exceed k, shrink window
            while (zero > k) {
                if (nums[low] == 0) {
                    zero--;
                }
                low++;
            }

            maxLen = max(maxLen, high - low + 1);
        }

        return maxLen;
    }
};