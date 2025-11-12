#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        vector<int> res;
        if (m > n) return res;

        // frequency arrays for 'a'..'z'
        int need[26] = {0}, window[26] = {0};
        for (char c : p) ++need[c - 'a'];

        // initialize first window
        for (int i = 0; i < m; ++i) ++window[s[i] - 'a'];

        // helper to compare two frequency arrays
        auto equalCounts = [&]() {
            for (int i = 0; i < 26; ++i)
                if (need[i] != window[i]) return false;
            return true;
        };

        if (equalCounts()) res.push_back(0);

        // slide the window across s
        for (int i = m; i < n; ++i) {
            // include s[i], exclude s[i-m]
            ++window[s[i] - 'a'];
            --window[s[i - m] - 'a'];

            if (equalCounts()) res.push_back(i - m + 1);
        }

        return res;
    }
};