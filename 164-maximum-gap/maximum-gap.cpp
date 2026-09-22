class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2)return 0;
        sort(nums.begin(),nums.end());
        int low= 0; 
        int high =1 ;
        int maxg= 0;
        sort(nums.begin(),nums.end());
        while(high<n){
            maxg = max(maxg,nums[high]-nums[low]);
            high++;
            low++;
        }
        return maxg;
    }
};