class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>ans;
        unordered_map<int,int>dp;
        int cnt = 0; 
        int cnt1=0; 
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                cnt = nums[i]^nums[j];
                ans[cnt]++;
            }
        } 
        for(int num:nums){
            for(auto x:ans){
                cnt1 = num^x.first;
                dp[cnt1]++;
            }
        }
        return dp.size();
    }
};