class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq ; //store the indices
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            //remove indices that are out of current window 
            if(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            //remove the smaller element from back 
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};