class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        int cnt1 = 0; // 010101...
        int cnt2 = 0; // 101010...

        for (int i = 0; i < n; i++) {

            // Expected character for 0101...
            char expected1 = (i % 2 == 0) ? '0' : '1';

            // Expected character for 1010...
            char expected2 = (i % 2 == 0) ? '1' : '0';

            if (s[i] != expected1)
                cnt1++;

            if (s[i] != expected2)
                cnt2++;
        }

        return min(cnt1, cnt2);
    }
};