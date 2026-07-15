class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();

        vector<int> last(26);

        // Store last occurrence of every character
        for (int i = 0; i < n; i++) {
            last[s[i] - 'a'] = i;
        }

        vector<int> ans;
        int start = 0;
        int end = 0;

        for (int i = 0; i < n; i++) {
            end = max(end, last[s[i] - 'a']);

            // Partition completed
            if (i == end) {
                ans.push_back(end - start + 1);
                start = i + 1;
            }
        }

        return ans;
    }
};