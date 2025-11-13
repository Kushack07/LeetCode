class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int t; 
        int l=nums.size();
        t= l-(k%l);
        vector<int>soln;
        for(int i=t;i<l;i++){
            cout<<nums[i]<<" ";
            soln.push_back(nums[i]);
        }
        for(int i=0 ;i<t;i++){
            cout<<nums[i]<<" "; 
            soln.push_back(nums[i]);
        }
        nums=soln;
    }
};