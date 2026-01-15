class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());

        int maxH = 1, maxV = 1;
        int curr = 1;

        // Horizontal bars
        for(int i = 1; i < hBars.size(); i++) {
            if(hBars[i] == hBars[i-1] + 1) {
                curr++;
                maxH = max(maxH, curr);
            } else {
                curr = 1;
            }
        }

        curr = 1;
        // Vertical bars
        for(int i = 1; i < vBars.size(); i++) {
            if(vBars[i] == vBars[i-1] + 1) {
                curr++;
                maxV = max(maxV, curr);
            } else {
                curr = 1;
            }
        }

        int side = min(maxH + 1, maxV + 1);
        return side * side;
    }
};