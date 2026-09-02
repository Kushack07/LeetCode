class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector <pair<int,int>>x;
        for(int i=0;i<n;i++){
            x.push_back({nums[i],i});
        }
        sort(x.begin(),x.end());
        int low = 0; 
        int high = n-1; 
        while(low<high){
            int sum = x[low].first +x[high].first;
            if(sum == target){
                return {x[low].second,x[high].second};
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