class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=nums[0];
        int minprod= nums[0]; 
        int n = nums.size();
        int ans = nums[0];
        for(int i =1;i<n;i++){
            int curr = nums[i];
            if(curr<0){
                swap(maxprod,minprod);
            }
            minprod=min(curr,minprod*curr);
            maxprod=max(curr,maxprod*curr);
            ans = max(ans,maxprod);
        }
        return ans;
    }
};