    class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            int n = nums.size();
            if(n<3){
                return {};
            }
            sort(nums.begin(),nums.end());
            set<vector<int>>ans;
            for(int i =0;i< n-2;i++){
                int low = i+1;
                int high = n-1; 
            while(low<high){
                int sum = nums[i]+nums[high]+nums[low];
                if(sum==0){
                    ans.insert({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                }
                else if(sum<0){
                    low++;
                }
                else{
                    high--;
                }
            }
            }
            vector<vector<int>>res(ans.begin(),ans.end());
            return res ; 
        }
    };