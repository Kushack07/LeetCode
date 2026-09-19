class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int ,int>mp ; 
        for(int x : nums){
            mp[x]++;
        }
        for(auto y :mp){
            if(y.second>n/2){
                return y.first;
            }
        }
        return -1; 
    }
};