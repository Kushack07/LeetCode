class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int n : nums){
            mp[n]++;
        }
        for(auto y : mp){
            if(y.second > 1){
                return y.first;
            }
        }
        return {};
    }
};