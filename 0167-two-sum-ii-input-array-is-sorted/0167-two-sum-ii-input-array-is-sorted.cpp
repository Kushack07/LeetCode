class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        const int OFFSET = 10000;
        int hash[20001] = {0};

        for(int i = 0; i < a.size(); i++) {
            int comp = t - a[i];
            if(comp >= -10000 && comp <= 10000 && hash[comp + OFFSET] != 0) {
                return {hash[comp + OFFSET] , i+1};
            }
            hash[a[i] + OFFSET] = i + 1;
        }
        return {};
    }
};