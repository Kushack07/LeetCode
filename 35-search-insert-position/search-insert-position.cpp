class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int>ans;
        int cnt =0;
        for(int i =0; i < n ;i++){
            if(nums[i]==target){
                return i; 
            }
            else if (nums[i]!=target){
                if(nums[i]>target){
                    return i ; 
                }
            }
        }
        return n; 
    }
};