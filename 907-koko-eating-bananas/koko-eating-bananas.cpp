class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        
        while(low < high) {
            int mid = (low + high) / 2; 
            int hours = 0;

            // Calculate total hours for this k
            for(int pk: piles) {
                hours += (pk+ mid - 1) / mid; // ceil(p/mid)
            }

            if(hours <= h)
                high = mid;      // try smaller k
            else
                low = mid + 1;   // need larger k
        }

        return low;
    }
};