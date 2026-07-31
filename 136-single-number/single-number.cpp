class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int>ans; 
        for(auto x:nums){
            ans[x]++;
        }
        for(auto it : ans){
            if(it.second == 1){
                return it.first ;
            }
        }
        return -1;
    }
};