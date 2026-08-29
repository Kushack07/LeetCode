class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0 ;
        int maxlen =0 ; 
        int zeros = 0 ;
        int n = nums.size();
        for(int high = 0; high <n ;high ++){
            if (nums[high]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[low]==0){
                    zeros--;
                }
            low++;
        }
        maxlen = max(maxlen , high-low+1);
        }
        return maxlen;
    }
};