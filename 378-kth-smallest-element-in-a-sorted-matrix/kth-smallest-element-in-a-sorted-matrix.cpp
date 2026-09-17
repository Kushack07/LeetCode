class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();

        int low = matrix[0][0];
        int high = matrix[n - 1][n - 1];

        while (low < high) {
            int mid = low + (high - low) / 2;

            int count = 0;

            // Count elements <= mid in every row
            for (int row = 0; row < n; row++) {
                int left = 0;
                int right = n - 1;

                // Binary search inside this row
                while (left <= right) {
                    int middle = left + (right - left) / 2;

                    if (matrix[row][middle] <= mid)
                        left = middle + 1;
                    else
                        right = middle - 1;
                }

                // 'left' = number of elements <= mid
                count += left;
            }

            if (count < k)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};