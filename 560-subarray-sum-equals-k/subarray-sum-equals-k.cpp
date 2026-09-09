class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        // prefix sum -> number of times we have seen it
        unordered_map<int, int> mp;

        // Important:
        // Before starting the array, prefix sum is 0
        mp[0] = 1;

        int sum = 0;  // current prefix sum
        int ans = 0;  // number of valid subarrays

        for (int i = 0; i < nums.size(); i++) {

            // Calculate current prefix sum
            sum += nums[i];

            // We need a previous prefix sum of (sum - k)
            if (mp.find(sum - k) != mp.end()) {

                // Each occurrence gives us one valid subarray
                ans += mp[sum - k];
            }

            // Remember current prefix sum
            mp[sum]++;
        }

        return ans;
    }
};