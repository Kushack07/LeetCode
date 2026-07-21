class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0 ; 
        int ans = 0; 
        int n =nums.size();
        for(char c :nums){
            if(c==1){
                cnt++;
                ans = max(ans,cnt);
            }else{
                cnt =0 ;

            }
        }
        return ans ;
    }
};