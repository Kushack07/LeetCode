class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n= nums.size();
        for(int i=0; i< n ;i++){
            freq[nums[i]]++;
        }
        for(auto i : freq){
            if(i.second > nums.size()/2)
                return i.first;
        }
        return -1;
    }
};