class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxe = nums[0]; 
        for(int i =0 ; i< n ;i++){
            maxe= max(maxe,nums[i]);
            int mine = nums[i];
            for(int j = i+1; j<n ; j++){
                mine = min(mine,nums[j]);
            }
            int diff = maxe - mine ; 
            if(diff<= k ){
                return i;
            } 
        }
        return -1; 
    }
};