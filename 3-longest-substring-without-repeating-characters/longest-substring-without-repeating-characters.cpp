class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0, maxlen = 0;
        unordered_map<char, int> f;

        for (int high = 0; high < s.size(); high++) {
            f[s[high]]++;

            while (f[s[high]] > 1) {
                f[s[low]]--;
                low++;
            }

            maxlen = max(maxlen, high - low + 1);
        }

        return maxlen;
    }
};