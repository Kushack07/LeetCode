class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int cnt = k ;
        int n = nums.size();
        for(int x:nums){
            if(x==1){
                if(cnt<k)return false;
                cnt=0;
            }else{
                cnt++;
            }    
        }
        return true;
    }
};