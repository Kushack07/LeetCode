class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int be = nums[0];
        int c = nums[0];
        for(int i =1 ; i< n ;i++){
            c = max(nums[i],c+nums[i]);
            be = max(be,c);
        }
        return be ;
    }
};