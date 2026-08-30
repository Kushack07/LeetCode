class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int minlen = 0;
        int maxlen = 0;
        int n = nums.size();

        int high = n - 1;
        int low = 0;

        vector<int> ans;
        vector<int> gg;

        if (n == 1) {
            return 1;
        }

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            if (nums[i] == mn) {
                ans.push_back(i);
            }

            if (nums[i] == mx) {
                gg.push_back(i);
            }
        }

        int minIndex = ans[0];
        int maxIndex = gg[0];

        // Keep minIndex on the left
        if (minIndex > maxIndex) {
            swap(minIndex, maxIndex);
        }

        // Option 1: remove both from left
        minlen = maxIndex - low + 1;

        // Option 2: remove both from right
        maxlen = high - minIndex + 1;

        // Option 3: min from left + max from right
        int mixed = minIndex - low + 1
                  + high - maxIndex + 1;

        return min({minlen, maxlen, mixed});
    }
};