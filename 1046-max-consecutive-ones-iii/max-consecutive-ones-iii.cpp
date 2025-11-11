#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return 0;
        if (k >= n) return n; // we can flip all zeros

        int left = 0;
        int zeroCount = 0;
        int maxLen = 0;

        for (int right = 0; right < n; ++right) {
            if (nums[right] == 0) ++zeroCount;

            // shrink window until zeroCount <= k
            while (zeroCount > k) {
                if (nums[left] == 0) --zeroCount;
                ++left;
            }

            // current window [left, right] is valid
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};