class Solution {
public:
    int numberOfSpecialChars(string word) {
        bitset<27> A[2];

        for (auto& ch : word) {
            int idx = ch & 31;
            int c = (ch >> 5) & 1;

            A[c][idx] = !c || !A[0][idx];
        }

        return (A[0] & A[1]).count();
    }
};