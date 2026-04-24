class Solution {
public:
    int furthestDistanceFromOrigin(string m) {
        int l = 0, r = 0, b = 0;

        for (char c : m) {
            if (c == 'L') l++;
            else if (c == 'R') r++;
            else b++;
        }

        return abs(l - r) + b;
    }
};