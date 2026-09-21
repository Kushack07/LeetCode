class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod=1; 
        int low=0; 
        int high=0; 
        int n=nums.size();
        int cnt=0;
        if(k<=1)return 0;
        
        for(int high=0;high<n;high++){
            prod *= nums[high];
            while(prod>=k){
                prod /=nums[low];
                low++;
            }
            cnt += high-low+1;
        }
        return cnt ;
    }
};