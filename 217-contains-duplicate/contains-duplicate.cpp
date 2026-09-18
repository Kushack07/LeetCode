class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }
        for(auto r : mp){
            if(r.second>1){
                return true;
            }
        }
        return false; 
    }
};