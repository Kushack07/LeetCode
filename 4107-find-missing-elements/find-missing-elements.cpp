class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        vector<int>ans; 
        for(int i=0;i<n-1;i++){
            int x = nums[i]+1;
            while(x<nums[i+1]){
                ans.push_back(x);
                x++;
            }
        }
        return ans ; 
    }
};