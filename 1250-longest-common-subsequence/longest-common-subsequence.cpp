class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1 =text1.size();
        int n2 = text2.size();
        int i ,j ; 
        vector<vector<int>>dp(n1+1);
        for(int i =0; i <= n1 ; i++){
            vector<int>t(n2+1,0);
            dp[i]=t;
        }
        for(i = 0 ;i <= n1 ;i++){
            dp[i][n2]=0;
        }
        for(j = 0; j<=n2;j++){
            dp[n1][j]=0;
        }
        for(i=n1-1;i>=0;i--)
        {
            for(j = n2-1 ; j>=0 ;j--)
            {
                if(text1[i]==text2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};

