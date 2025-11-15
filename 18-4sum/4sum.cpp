class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 4) return result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            // Skip duplicates for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                // Skip duplicates for j
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                long long remaining = (long long)target - nums[i] - nums[j];
                int l = j + 1;
                int r = n - 1;

                while (l < r) {
                    long long twoSum = (long long)nums[l] + nums[r];

                    if (twoSum == remaining) {
                        result.push_back({nums[i], nums[j], nums[l], nums[r]});

                        // Skip duplicates for l
                        int lastL = nums[l];
                        while (l < r && nums[l] == lastL) l++;

                        // Skip duplicates for r
                        int lastR = nums[r];
                        while (l < r && nums[r] == lastR) r--;
                    } 
                    else if (twoSum < remaining) {
                        l++;
                    } 
                    else {
                        r--;
                    }
                }
            }
        }

        return result;
    }
};