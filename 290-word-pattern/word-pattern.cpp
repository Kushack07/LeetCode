class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // Split s into words
        vector<string> words;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }
        words.push_back(temp);

        // Length check
        if (pattern.size() != words.size())
            return false;

        int n = pattern.size();

        // Brute force comparison
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                // Same pattern letter → same word
                if (pattern[i] == pattern[j]) {
                    if (words[i] != words[j])
                        return false;
                }

                // Different pattern letter → different word
                if (pattern[i] != pattern[j]) {
                    if (words[i] == words[j])
                        return false;
                }
            }
        }
        return true;
    }
};