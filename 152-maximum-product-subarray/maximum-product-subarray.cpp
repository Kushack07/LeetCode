class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m = nums[0];
        int mini = nums[0];
        int ans = nums[0];
        for(int i =1 ; i< nums.size() ;i++){
            if (nums[i]<0){
                swap(m,mini);
            }
            m = max(nums[i],m*nums[i]);
            mini = min(nums[i],mini*nums[i]);
            ans = max(ans , m);
        }
        return ans ;
    }
};