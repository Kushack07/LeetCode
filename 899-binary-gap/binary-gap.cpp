class Solution {
public:
    int binaryGap(int n) {
        int maxg = 0;
        int cur = 0;
        bool isone = false;

        while (n > 0) {
            if (n & 1) {
                if (isone) {
                    maxg = max(maxg, cur + 1);
                }

                isone = true;
                cur = 0;
            }
            else if (isone) {
                cur++;
            }

            n >>= 1;
        }

        return maxg;
    }
};
