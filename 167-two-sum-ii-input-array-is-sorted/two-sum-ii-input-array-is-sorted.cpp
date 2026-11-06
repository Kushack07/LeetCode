class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0; 
        int high = n-1; 
        int sum =0 ; 
        while(low < n  && high < n ){
            sum = nums[low]+nums[high];
            if(sum == target){
                return {low+1,high+1};
            }
            else if(sum < target){
                low++;
            }
            else{
                high--;
            }
        }
        return {};
    }
};