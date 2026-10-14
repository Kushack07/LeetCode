class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp ;
        vector<int>ans ;
        for(int c : nums){
            mp[c]++;
        }
        for(auto x :mp){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};