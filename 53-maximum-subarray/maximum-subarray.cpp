class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int be =nums[0];
        int ans =nums[0];
        for(int i=1;i<n;i++){
            int v1=be+nums[i];
            int v2=nums[i];
            be=max(v1,v2);
            ans=max(ans,be);
        }
        return ans;
    }
};