class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_set<int>ans(nums.begin(),nums.end()); 
        int target = k ; 
        while(ans.count(target)){
            target+=k;
        }
        return target ;
    }
};