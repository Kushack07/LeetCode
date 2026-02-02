class Solution {
public:
    int maxArea(vector<int>& h) {
        int left = 0;
        int right = h.size() - 1;
        int ma = 0;

        while (left < right) {
            int area = (right - left) * min(h[left], h[right]);
            ma = max(ma, area);

            if (h[left] < h[right]) {
                left++;
            } else {
                right--;
            }
        }
        return ma;
    }
};