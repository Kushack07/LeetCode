class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
        // Minimum possible answer = largest element
        long long low = *max_element(nums.begin(), nums.end());
        
        // Maximum possible answer = sum of all elements
        long long high = accumulate(nums.begin(), nums.end(), 0LL);

        while (low < high) {
            
            // Try this value as the maximum allowed subarray sum
            long long mid = low + (high - low) / 2;
            
            long long currentSum = 0;
            int subarrays = 1;

            // Count how many subarrays are needed
            // if each subarray can have sum <= mid
            for (int num : nums) {
                if (currentSum + num > mid) {
                    // Start a new subarray
                    currentSum = num;
                    subarrays++;
                } 
                else {
                    currentSum += num;
                }
            }

            // We can split into k or fewer subarrays
            // So try a smaller maximum sum
            if (subarrays <= k) {
                high = mid;
            } 
            else {
                // Need more than k subarrays,
                // so maximum sum must be increased
                low = mid + 1;
            }
        }

        // low == high = minimum possible largest sum
        return low;
    }
};