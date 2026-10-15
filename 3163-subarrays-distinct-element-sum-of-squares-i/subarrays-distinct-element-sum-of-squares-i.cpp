class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum =0; 
        for(int i =0 ;i<n; i++){
            unordered_set<int>ans;
            for(int j=i;j<n;j++){
                ans.insert(nums[j]);
                int cnt = ans.size();
                sum += cnt*cnt;
            }
        }
        return sum ;
    }
};