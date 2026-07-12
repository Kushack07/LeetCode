class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++)
            arr.push_back({nums[i], i});

        sort(arr.begin(), arr.end());

        int slow = 0;
        int fast = arr.size() - 1;

        while(slow < fast) {

            int sum = arr[slow].first + arr[fast].first;

            if(sum == target)
                return {arr[slow].second, arr[fast].second};

            else if(sum < target)
                slow++;

            else
                fast--;
        }

        return {};
    }
};