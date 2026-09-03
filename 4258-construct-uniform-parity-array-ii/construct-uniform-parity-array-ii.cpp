class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int mn = INT_MAX;
        int oddCnt = 0;

        for (int x : nums) {
            mn = min(mn, x);

            if (x % 2 == 1)
                oddCnt++;
        }

        return mn % 2 == 1 || oddCnt == 0;
    }
};