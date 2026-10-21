class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low= 0; 
        int high= 0;
        int ml = INT_MAX;
        int sum = 0 ; 
        while(high<n){
            sum += nums[high];
            while(sum >= target){
                ml = min(ml,high-low+1);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        if(ml == INT_MAX){
            return 0 ;
        }
        return ml ;
    }
};