class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        vector<pair<int,int>> arr;

        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int low = 0;
        int high = n - 1;

        while(low < high) {

            int sum = arr[low].first + arr[high].first;

            if(sum == target) {
                return {arr[low].second, arr[high].second};
            }
            else if(sum < target) {
                low++;
            }
            else {
                high--;
            }
        }

        return {};
    }
};