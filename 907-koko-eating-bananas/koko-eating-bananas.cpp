class Solution {
public:

    // This function checks whether Koko can finish
    // all the bananas with the given eating speed.
    bool canFinish(vector<int>& piles, int h, int speed) {

        // Total hours required at this speed
        long long hours = 0;

        // Visit every pile
        for (int pile : piles) {

            // Hours needed for this pile
            // ceil(pile / speed)
            //
            // Example:
            // pile = 7
            // speed = 4
            //
            // 7/4 = 1.75
            // Need 2 hours
            //
            // Formula:
            // ceil(a/b) = (a+b-1)/b
            hours += (pile + speed - 1) / speed;
        }

        // If total hours are within h,
        // then this speed is sufficient.
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        // Minimum possible eating speed
        int low = 1;

        // Maximum possible eating speed
        // (largest pile)
        int high = *max_element(piles.begin(), piles.end());

        // Store answer
        int ans = high;

        // Binary Search on answer
        while (low <= high) {

            // Middle speed
            int mid = low + (high - low) / 2;

            // Check if Koko can finish
            if (canFinish(piles, h, mid)) {

                // Current speed works
                ans = mid;

                // Try to reduce speed
                high = mid - 1;
            }
            else {

                // Current speed is too slow
                // Increase speed
                low = mid + 1;
            }
        }

        return ans;
    }
};