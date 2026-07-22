class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        ans.push_back({});   // Start with the empty subset

        for (int num : nums) {

            int size = ans.size();   // Number of subsets already present

            for (int i = 0; i < size; i++) {

                vector<int> temp = ans[i]; // Copy an existing subset
                temp.push_back(num);       // Add current number
                ans.push_back(temp);       // Store the new subset
            }
        }

        return ans;
    }
};