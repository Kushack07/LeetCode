class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        
        // 1. Clean the string: keep only alphanumeric characters and make them lowercase
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        
        // 2. Create a reversed copy of the cleaned string
        string reversed_cleaned = cleaned;
        reverse(reversed_cleaned.begin(), reversed_cleaned.end());
        
        // 3. Compare the cleaned version with its reverse
        return cleaned == reversed_cleaned;
    }
};
