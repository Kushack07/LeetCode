class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ik) {

        vector<vector<int>> res;

        sort(ik.begin(), ik.end());

        int start = ik[0][0];
        int end = ik[0][1];

        for(int i = 1; i < ik.size(); i++) {

            int start2 = ik[i][0];
            int end2 = ik[i][1];

            if(start2 <= end) {
                end = max(end, end2);
            }
            else {
                res.push_back({start, end});
                start = start2;
                end = end2;
            }
        }

        res.push_back({start, end});

        return res;
    }
}; 