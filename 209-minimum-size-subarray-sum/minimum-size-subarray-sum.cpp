class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0; 
        int sum = 0 ;
        int min_len= INT_MAX;
        for(int h=0;h<n;h++){
            sum+=nums[h];
            while(sum >=target){
                int cur = h-l+1;
                if(cur < min_len){
                    min_len = cur;
                }
                sum -=nums[l];
                l++; 
            }
        }
        if(min_len==INT_MAX){
            return 0 ;
        }
        return min_len ;
    }
};