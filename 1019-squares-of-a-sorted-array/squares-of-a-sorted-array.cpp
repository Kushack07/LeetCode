class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int pos = n-1;
        vector<int>ans(n);
        while(low<=high){
            if(abs(nums[low]) > abs(nums[high])){
                ans[pos]=nums[low]*nums[low];
                low++;
            }else{
                ans[pos]=nums[high]*nums[high];
                high--;
            }
            pos--;
        }
        return ans;   
    }
};