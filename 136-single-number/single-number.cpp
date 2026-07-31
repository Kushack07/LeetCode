class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>ans;
        for(auto x:nums){
            ans[x]++;
        }
        for(auto t:ans){
            if(t.second==1){
                return t.first;
            }
        }
        return -1;
    }
};