class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0; i< n ;i++){
            int a = nums[i]*nums[i];
            ans.push_back(a);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};