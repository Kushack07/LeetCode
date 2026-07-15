class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int zeroCount = 0;
        long long product = 1;

        // Calculate product of non-zero elements
        for (int x : nums) {
            if (x == 0)
                zeroCount++;
            else
                product *= x;
        }

        vector<int> ans;

        for (int x : nums) {

            // More than one zero
            if (zeroCount > 1) {
                ans.push_back(0);
            }

            // Exactly one zero
            else if (zeroCount == 1) {

                if (x == 0)
                    ans.push_back(product);
                else
                    ans.push_back(0);
            }

            // No zeroes
            else {
                ans.push_back(product / x);
            }
        }

        return ans;
    }
};