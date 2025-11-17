class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int cnt = k;  // so that the first 1 is always allowed

        for (int x : nums) {
            if (x == 1) {
                if (cnt < k) return false; // distance from previous 1 is too small
                cnt = 0; // reset after seeing a 1
            } else {
                cnt++; // count zeros between 1s
            }
        }
        return true;
    }
};