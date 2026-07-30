#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // 1. Sanity check: if array length is less than 3, return empty list
        if (nums.size() < 3) {
            return {};
        }

        // 2. Sort the array to use the two-pointer approach
        sort(nums.begin(), nums.end());

        // 3. Create a set to store unique triplets (acts like the hash set in the video)
        set<vector<int>> resultSet;

        // 4. Iterate and fix one element at a time (go up to length - 2)
        for (int i = 0; i < nums.size() - 2; i++) {
            
            // 5. Initialize left and right pointers
            int left = i + 1;
            int right = nums.size() - 1;

            // 6. Two-pointer search
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    // Add to set to handle duplicates automatically
                    resultSet.insert({nums[i], nums[left], nums[right]});
                    // Move both pointers to continue searching for other pairs
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    // Sum is too small, need a larger number
                    left++;
                } 
                else {
                    // Sum is too big, need a smaller number
                    right--;
                }
            }
        }

        // 7. Convert the set back to a vector of vectors and return
        vector<vector<int>> result(resultSet.begin(), resultSet.end());
        return result;
    }
};