class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int x =0 ; 
        if(n==0){
            return 0;
        }
        for(int v:nums){
            x^=v; 
        }
        if(x!=0){
            return n ;
        }
        for(int v:nums){
            if(v!=0){
                return n-1;
            }
        }
        return 0; 
    }
};