class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans ; 
        int mini = nums[0];
        int maxi = nums[0];
        for(int val :nums){
            mini = min(mini,val);
            maxi = max(maxi,val);
        }
        for(int i =mini+1;i<maxi;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                ans.push_back(i);
            }
        }
        return ans; 
    }
};