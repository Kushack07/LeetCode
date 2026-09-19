class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<vector<int>> ans;

        for(int x : nums) {
            mp[x]++;
        }

        for(auto x : mp) {
            int num = x.first;
            int freq = x.second;

            for(int i = 0; i < freq; i++) {
                if(i >= ans.size()) {
                    ans.push_back({});
                }

                ans[i].push_back(num);
            }
        }

        return ans;
    }
};