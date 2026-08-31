class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int  missing = 1;
        for (int x : nums){
            if(x<0 ){
                continue ;
            }
            else{
                if(x==missing){
                    missing++;
                }
            }
        }
        return missing ;
    }
};