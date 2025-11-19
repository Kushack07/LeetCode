class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod= nums[0];
        int minprod= nums[0];
        int ans =nums[0];
        for(int i=1;i<nums.size();i++){
            int curr = nums[i];
            if(curr<0){
            swap(maxprod,minprod);
            }
            maxprod =max(maxprod*curr,curr);
            minprod =min(minprod*curr,curr);
            ans=max(ans,maxprod);
        }
        return ans;
    }
};