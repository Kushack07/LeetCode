class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size() - 1;
        int j = t.size() - 1;
        int skipS = 0, skipT = 0;

        while (i >= 0 || j >= 0) {

            // Move pointer i for string s
            while (i >= 0) {
                if (s[i] == '#') { skipS++; i--; }
                else if (skipS > 0) { skipS--; i--; }
                else break;  // valid character
            }

            // Move pointer j for string t
            while (j >= 0) {
                if (t[j] == '#') { skipT++; j--; }
                else if (skipT > 0) { skipT--; j--; }
                else break;  // valid character
            }

            // Compare current valid characters
            char chS = (i >= 0 ? s[i] : '\0');
            char chT = (j >= 0 ? t[j] : '\0');

            if (chS != chT) return false;

            i--;
            j--;
        }

        return true;
    }
};