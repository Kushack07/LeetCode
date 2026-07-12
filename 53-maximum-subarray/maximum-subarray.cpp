class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int be = a[0];
        int ans = a[0];

        for(int i = 1; i < a.size(); i++){
            be = max(a[i],be+a[i]);
            ans = max(ans, be);
        }

        return ans;
    }
};