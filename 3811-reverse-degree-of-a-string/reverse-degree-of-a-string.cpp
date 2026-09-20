class Solution {
public:
    int reverseDegree(string s) {
        int prod = 0;

        for (int i = 0; i < s.size(); i++) {
            int digit = 'z' - s[i] + 1;
            prod += digit * (i + 1);
        }

        return prod;
    }
};