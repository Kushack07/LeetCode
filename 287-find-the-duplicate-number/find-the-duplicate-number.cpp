class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int ans=0;
        for(int x : nums){
            mp[x]++;
            if(mp[x]>1){
                return x; 
            }
        }
        return -1; 
    }
};