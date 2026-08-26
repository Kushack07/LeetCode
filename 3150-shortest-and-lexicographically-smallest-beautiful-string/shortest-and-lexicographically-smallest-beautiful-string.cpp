class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string mans = "";

        for (int i = 0; i < n; i++) {
            int cnt = 0;

            for (int j = i; j < n; j++) {

                if (s[j] == '1')
                    cnt++;

                if (cnt == k) {
                    string ans = s.substr(i, j - i + 1);

                    if (mans == "" ||
                        ans.size() < mans.size() ||
                        (ans.size() == mans.size() && ans < mans)) {
                        mans = ans;
                    }

                    break; // further j only makes substring longer
                }
            }
        }

        return mans;
    }
};