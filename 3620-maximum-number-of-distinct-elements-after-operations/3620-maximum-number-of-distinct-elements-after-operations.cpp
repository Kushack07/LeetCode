class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int first = 0;
        int last =-1e9;
        for(int i =0 ; i<nums.size();i++){
            int l = max(nums[i]-k,last+1);
            if(l<=nums[i]+k){
                last= l ,first++;
            }
        }
        return first; 
    }
};