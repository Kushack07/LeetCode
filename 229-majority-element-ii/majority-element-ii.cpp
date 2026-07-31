class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp ;
        vector<int>ans ;
        int n =nums.size();
        for(auto c : nums){
            mp[c]++;
        }
        for(auto x:mp){
            if(x.second>(n/3)){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};