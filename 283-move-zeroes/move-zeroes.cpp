class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int zc = 0;

        for (int x : nums) {
            if (x == 0)
                zc++;
            else
                ans.push_back(x);
        }

        while (zc--) {
            ans.push_back(0);
        }

        nums = ans;
    }
};