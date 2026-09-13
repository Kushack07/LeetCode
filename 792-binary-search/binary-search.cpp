class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0; 
        int high = nums.size()-1; 
        while(left<=high ){
            int mid = left+(high-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                high = mid-1; 
            }
        }
        return -1;
    }
};