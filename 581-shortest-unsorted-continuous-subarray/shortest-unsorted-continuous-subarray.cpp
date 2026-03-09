class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n= nums.size();
        vector<int> sorted = nums;
        sort(sorted.begin(),sorted.end());
        int start= 0 ; 
        int end = n-1;
        while(start<nums.size() && nums[start]==sorted[start])
            start++;
        while(end > start && nums[end]==sorted[end])
            end--;
        if(start>=end)
            return 0;
        return end -start+1;
    }
};