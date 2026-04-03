class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& ni) {
        
        vector<vector<int>> res;
        int i = 0;
        int n = in.size();

        // Step 1: add intervals before newInterval
        while(i < n && in[i][1] < ni[0]) {
            res.push_back(in[i]);
            i++;
        }

        // Step 2: merge overlapping intervals
        while(i < n && in[i][0] <= ni[1]) {
            ni[0] = min(ni[0], in[i][0]);
            ni[1] = max(ni[1], in[i][1]);
            i++;
        }

        res.push_back(ni);

        // Step 3: add remaining intervals
        while(i < n) {
            res.push_back(in[i]);
            i++;
        }

        return res;
    }
};