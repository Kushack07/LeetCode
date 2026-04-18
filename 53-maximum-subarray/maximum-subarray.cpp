class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int bestending = a[0];
        int ans = a[0];

        for(int i = 1; i < a.size(); i++){
            bestending = max(a[i], bestending + a[i]);
            ans = max(ans, bestending);
        }

        return ans;
    }
};