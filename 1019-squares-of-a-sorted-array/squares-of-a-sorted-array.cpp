class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int low =0;
        int high =n;
        while(low<high){
            int a = nums[low]*nums[low];
            low++;
            ans.push_back(a);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};