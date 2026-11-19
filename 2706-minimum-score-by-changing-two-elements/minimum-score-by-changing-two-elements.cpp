#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // Option 1: Change the two largest elements
        int opt1 = nums[n - 3] - nums[0];
        
        // Option 2: Change the two smallest elements
        int opt2 = nums[n - 1] - nums[2];
        
        // Option 3: Change one smallest and one largest element
        int opt3 = nums[n - 2] - nums[1];
        
        // The minimum difference (low) is always 0, so we just return the minimum high
        return min({opt1, opt2, opt3});
    }
};

