class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int ts = 0 ; 
        for(int x: nums){
            ts+=x;
        }
        int ls = 0; 
        int rs = 0; 
        for(int i=0;i<n;i++){
            rs=ts-ls-nums[i];
            if(ls == rs){
                return i; 
            }
            ls +=nums[i];
        }
        return -1;
    }
};