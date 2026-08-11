class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int missing=0; 
        for(int x:nums){
            if(x==missing){
                missing++; 
            }
        }
    return missing; 
    }
};