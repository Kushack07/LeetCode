class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int low= 0 ; 
        int high = 0; 
        int sum = 0;
        int maxsum = INT_MIN ;
        while(high < n){
            sum += nums[high];
            maxsum = max(maxsum,sum);
            if(sum < 0){
                sum = 0 ; 
                low = high+1;
            }
            high++;
        } 
        return maxsum ; 
    }
};