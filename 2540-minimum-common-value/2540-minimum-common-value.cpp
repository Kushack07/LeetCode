class Solution {
public:
    int getCommon(vector<int>& a, vector<int>& b) {
        for (int i = 0, j = 0; i < a.size() && j < b.size(); a[i] < b[j] ? i++ : j++)
            if (a[i] == b[j]) return a[i];
        return -1;
    }
};