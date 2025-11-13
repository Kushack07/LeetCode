class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //  t=l-k%l
    int l=nums.size();
    int t=l-k%l;//7-3%7=4
    vector<int>ans;
    for(int i=t;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
        ans.push_back(nums[i]);
    }
    for(int i=0;i<t;i++)
    {
        cout<<nums[i]<<" ";
        ans.push_back(nums[i]);
    }
    nums=ans;
    }
};