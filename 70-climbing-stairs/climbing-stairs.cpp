class Solution {
public:
    unordered_map<int, int> mp;

    int climbStairs(int i, int n) {
        if (i == n) {
            return 1;
        }

        if (i > n) {
            return 0;
        }

        if (mp.find(i) != mp.end()) {
            return mp[i];
        }

        int n1 = climbStairs(i + 1, n);
        int n2 = climbStairs(i + 2, n);

        return mp[i] = n1 + n2;
    }

    int climbStairs(int n) {
        mp.clear();
        return climbStairs(0, n);
    }
};