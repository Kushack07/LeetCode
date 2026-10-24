class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mp = nums[0];
        int mip  =nums[0];
        int ans = nums[0];
        for(int i =1 ;i < n ;i++){
            int x = nums[i];
            if(x<0){
                swap(mp,mip);
            }
            mp = max(x,mp*x);
            mip = min(x,mip*x);
            ans= max(ans ,mp);
        }
        return ans; 
    }
};