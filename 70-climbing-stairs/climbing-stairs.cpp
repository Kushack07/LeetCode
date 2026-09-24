class Solution {
public:
    unordered_map<int,int>dp;
    int climbStairs(int n) {
        if(n==1 || n==0){
            return 1;
        }
        if(dp.find(n)!=dp.end()){
            return dp[n];
        }

        int res=climbStairs(n-1)+climbStairs(n-2);
        dp[n]=res;
        return res;
    }
};

// USING THE TABULATION BELOW  better space complexity 
/*
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1)
            return 1;

        vector<int> dp(n + 1);

        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};
*/