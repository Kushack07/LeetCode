class Solution {
public:
    long long func(vector<int>& arr, int n, int speed) {
        long long hours = 0;

        for(int i = 0; i < n; i++) {
            hours += arr[i] / speed;

            if(arr[i] % speed != 0) {
                hours++;
            }
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int res = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            long long hr = func(piles, piles.size(), mid);

            if(hr > h) {
                low = mid + 1;
            }
            else {
                res = mid;
                high = mid - 1;
            }
        }

        return res;
    }
};