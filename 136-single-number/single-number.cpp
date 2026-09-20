class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // we will use the xor 
        int ans=0;
        for(int n:nums){
            ans ^=n;
        }
        return ans; 
    }
};