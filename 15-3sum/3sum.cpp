class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3){
            return {};
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>rs ; 
        for(int i=0;i<nums.size()-2;i++){
            int left = i+1; 
            int right = n-1;
            while(left <right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum ==0){
                    rs.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum < 0 ){
                    left++;
                }
                else{
                    right--;
                }
            } 
        }
        vector<vector<int>>res (rs.begin(),rs.end());
        return res; 
    }
};