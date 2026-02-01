class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            int ans=nums[left]+nums[right]; 
            if(ans ==target){
                return {left+1,right+1};
            }
            else if(ans <target){
                left++;
            }else{
                right--;
            }
        }
        return {};
    }
};