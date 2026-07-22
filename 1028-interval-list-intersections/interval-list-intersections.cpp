class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl, vector<vector<int>>& sl) {

        vector<vector<int>> ans;

        int n = fl.size();
        int m = sl.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int start = max(fl[i][0], sl[j][0]);
                int end = min(fl[i][1], sl[j][1]);

                if (start <= end) {
                    ans.push_back({start, end});
                }
            }
        }

        return ans;
    }
};