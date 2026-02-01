class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin()+1,nums.end());
        int min = nums[0];
        return min + nums[1]+nums[2];
    }
};