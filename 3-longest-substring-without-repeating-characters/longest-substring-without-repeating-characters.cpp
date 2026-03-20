class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> f;
        
        int low = 0;
        int maxLen = 0;

        for (int high = 0; high < s.size(); high++) {
            
            // If character already exists, move low pointer
            while (f[s[high]] > 0) {
                f[s[low]]--;
                low++;
            }

            // Add current character
            f[s[high]]++;

            // Update max length
            maxLen = max(maxLen, high - low + 1);
        }

        return maxLen;
    }
};