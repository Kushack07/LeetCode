class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum =0 ;
        vector<int>ans; 
        for(int i =0; i < n ;i++){
            set<int>ds;
            for(int j =i;j< n ;j++){
                ds.insert(nums[j]);
                int cnt = ds.size();
                sum += cnt * cnt ; 
            }
        }
        return sum; 
    }
};