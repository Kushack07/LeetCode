class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        int n = nums.size();

        long long sum = 0;
        long long maxsum = 0;

        unordered_map<int, int> mp;

        while (high < n) {
            sum += nums[high];
            mp[nums[high]]++;

            if (high - low + 1 > k) {
                sum -= nums[low];
                mp[nums[low]]--;
                
                if (mp[nums[low]] == 0) {
                    mp.erase(nums[low]);
                }

                low++;
            }

            if (high - low + 1 == k && mp.size() == k) {
                maxsum = max(maxsum, sum);
            }

            high++;
        }

        return maxsum;
    }
};