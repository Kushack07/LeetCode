class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int maxNum = *max_element(nums.begin(), nums.end());

        vector<long long> freq(maxNum + 1, 0);
        for (int x : nums) {
            freq[x]++;
        }

        // cnt[g] = how many numbers are divisible by g
        vector<long long> cnt(maxNum + 1, 0);
        for (int g = 1; g <= maxNum; g++) {
            for (int multiple = g; multiple <= maxNum; multiple += g) {
                cnt[g] += freq[multiple];
            }
        }

        // gcdPairs[g] = number of pairs whose gcd is exactly g
        vector<long long> gcdPairs(maxNum + 1, 0);

        for (int g = maxNum; g >= 1; g--) {
            long long c = cnt[g];
            gcdPairs[g] = c * (c - 1) / 2;

            for (int multiple = 2 * g; multiple <= maxNum; multiple += g) {
                gcdPairs[g] -= gcdPairs[multiple];
            }
        }

        // Prefix sums of pair counts.
        vector<long long> prefix(maxNum + 1, 0);
        for (int g = 1; g <= maxNum; g++) {
            prefix[g] = prefix[g - 1] + gcdPairs[g];
        }

        vector<int> answer;

        for (long long q : queries) {
            // Queries are 0-indexed in the sorted GCD array.
            int left = 1;
            int right = maxNum;
            int res = maxNum;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (prefix[mid] > q) {
                    res = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            answer.push_back(res);
        }

        return answer;
    }
};