class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> twoXor;
        unordered_set<int> ans;

        int n = nums.size();

        // All possible XORs of two elements
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                twoXor.insert(nums[i] ^ nums[j]);
            }
        }

        // XOR each result with every element
        for (int x : twoXor) {
            for (int num : nums) {
                ans.insert(x ^ num);
            }
        }

        return ans.size();
    }
};