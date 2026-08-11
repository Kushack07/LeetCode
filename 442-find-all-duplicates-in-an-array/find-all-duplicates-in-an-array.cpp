class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>ans;
        sort(nums.begin(),nums.end());
        vector<int>a;
        for(int x:nums){
            ans[x]++;
            if(ans[x]>1){
                a.push_back(x);
            }
        }
        return a; 
    }
};