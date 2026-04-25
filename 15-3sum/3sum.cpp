class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int l = i+1;
            int h =n-1;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(l<h){
                int sum = nums[i]+nums[l]+nums[h];
                if(sum==0){
                    ans.push_back({nums[i],nums[l],nums[h]});
                    l++;
                    h--;
                while(l<h && nums[l]==nums[l-1])l++;
                while(l<h && nums[l]==nums[h+1])h++;
                }
                else if(sum<0){
                    l++;
                }else{
                    h--;
                }
            }
        }
        return ans ;
    }
};