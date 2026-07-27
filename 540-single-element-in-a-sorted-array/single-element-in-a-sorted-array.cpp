class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>ans; 
        int n = nums.size();
        for(int num:nums){
            ans[num]++;
        }
        for(auto x:ans){
            if(x.second == 1){
                return x.first; 
            }
        }
        
        return -1; 
    }
};