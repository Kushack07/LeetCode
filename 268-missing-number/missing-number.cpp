class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                return i ; 
            }
        }
        return n ; 
    }
};

/*
    int missing(vector<int>&kush){
        int n =kush.size();
        int mis =0;
        for(int x :kush){
            if(x==mis){
                mis++;
            }
        }
        return mis ;
    }
*/