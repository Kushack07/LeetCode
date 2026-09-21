class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int low=0 ;
        int high =0;
        int n = nums.size(); 
        int maxlen =0;
        while(high<n){
            if(nums[high]==1){
                maxlen = max(maxlen,high-low+1);
            }
            else{
                low = high+1; 
            }
            high++;
        }
        return maxlen; 
    }
};