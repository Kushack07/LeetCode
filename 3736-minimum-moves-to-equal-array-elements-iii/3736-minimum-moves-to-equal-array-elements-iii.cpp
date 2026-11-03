class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxe = *max_element(nums.begin(),nums.end());
        int n  =nums.size();
        int sum =0 ; 
        for(int i =0; i < n ;i++){
            sum += (maxe-nums[i]);
        }
        return sum ; 
    }
};