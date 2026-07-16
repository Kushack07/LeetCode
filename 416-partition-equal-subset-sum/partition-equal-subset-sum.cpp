class Solution {
public:
    bool subsetsum(vector<int>&arr,int sum){
        int n =arr.size();
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
        //sum is 0 always possible 
        for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                // current element 
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int totalsum =0 ;
        for(int x:nums){
            totalsum += x; 
        }
        if(totalsum%2!=0){
            return false;
        }
        return subsetsum(nums,totalsum/2);
    }
};