class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> res;

        sort(intervals.begin(), intervals.end());

        int start = intervals[0][0];
        int end = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++) {

            int start2 = intervals[i][0];
            int end2 = intervals[i][1];

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