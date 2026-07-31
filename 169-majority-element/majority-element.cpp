class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp ;
        int n = nums.size(); 
        for(auto c:nums){
            mp[c]++;
        }
        for(auto t:mp){
            if(t.second>n/2){
                return t.first ; 
            }
        }
        return -1; 
    }
};