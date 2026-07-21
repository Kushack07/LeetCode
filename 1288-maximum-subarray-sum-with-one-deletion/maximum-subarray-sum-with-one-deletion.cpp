class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int nodeletion = arr[0];      // Max sum ending here without deletion
        int onedeletion = 0;          // Max sum ending here with one deletion
        int res = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            int prev = nodeletion;

            nodeletion = max(arr[i], nodeletion + arr[i]);

            onedeletion = max(onedeletion + arr[i], prev);

            res = max({res, nodeletion, onedeletion});
        }

        return res;
    }
};