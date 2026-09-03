class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>>pm; 
        for(int i=0;i<n;i++){
            pm.push_back({nums[i],i});
        }
        sort(pm.begin(),pm.end());
        int low = 0; 
        int high= n-1; 
        while(low < high){
            int sum = pm[low].first + pm[high].first;
            if(sum==target){
                return {pm[low].second,pm[high].second};
            } 
            else if(sum<target){
                low++;
            }
            else{
                high--;
            }
        }
        return {};
    }
};