class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        unordered_map<int, vector<int>> mp;

        for (auto x : rs) {
            mp[x[0]].push_back(x[1]);
        }

        int ans = (n - mp.size()) * 2;

        for (auto x : mp) {
            vector<int> s(11, 0);

            for (int seat : x.second)
                s[seat] = 1;

            bool left = !s[2] && !s[3] && !s[4] && !s[5];
            bool middle = !s[4] && !s[5] && !s[6] && !s[7];
            bool right = !s[6] && !s[7] && !s[8] && !s[9];

            if (left && right)
                ans += 2;
            else if (left || middle || right)
                ans += 1;
        }

        return ans;
    }
};