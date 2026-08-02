class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low= 0 ; 
        int high = nums.size()-1;
        while(low<=high){
            if(nums[low]==target){
                return low;
            }
            if(nums[high]==target){
                return high;
            }
            if(nums[low]!=target){
                low++;
            }
            if(nums[high]!=target){
                high--;
            }
        }
        return -1;
    }
};