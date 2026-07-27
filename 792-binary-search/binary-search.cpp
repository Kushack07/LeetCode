class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low= 0;
        int high= n-1; 
        int mid = (low+high)/2;
        while(low<=high){
            if(nums[low]==target){
                return low;
            }
            else if(nums[low]<target){
                low++;
            }else{
                high--;
            }
        }
        return -1;
    }
};