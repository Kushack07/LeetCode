class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0 ; 
        for (int x: nums){
            total+=x;
        }
        int ls =0 ;
        int rs = 0 ;
        for(int i =0 ; i < n ; i++){
            rs =total-nums[i]-ls;
            if(ls==rs){
                return i;
            }
            ls +=nums[i];
        }   
        return -1;
    }
};