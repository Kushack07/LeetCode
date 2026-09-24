class Solution {
public:
    int smallestIndex(vector<int>& nums) {
       int n = nums.size();
       int sum =0 ;
       for(int i =0 ;i < n ;i++){
        while(nums[i]!=0){
            int dig = nums[i]%10;
            sum +=dig;
            nums[i]/=10;
        }
        if(i==sum){
            return i;
        }else{
            sum =0;
        }
       }
        return -1; 
    }
};