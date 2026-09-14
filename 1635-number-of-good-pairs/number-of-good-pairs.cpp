class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt= 0 ; 
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i =0 ;i < n ;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>1){
                cnt += x.second*(x.second-1)/2; 
            }else{
                continue;
            }
        }
        return cnt; 
    }
};