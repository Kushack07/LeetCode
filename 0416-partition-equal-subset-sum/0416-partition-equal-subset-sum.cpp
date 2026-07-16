class Solution {
public:
    bool partion(vector<int>&ans,int sum){
        int n =ans.size();
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
        for(int i=1;i<=n;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                //take 
                if(ans[i-1]<=j){
                    dp[i][j]=dp[i-1][j-ans[i-1]]||dp[i-1][j]; 
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n= nums.size();
        int ts =0 ;
        for(int i :nums){
            ts +=i ;
        }
        if(ts%2!=0){
            return false;
        }
        return partion(nums,(ts/2));
    }
};