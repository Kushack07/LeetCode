class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>ans ;
        for(int n:nums){
            ans.push(n);
        }

        for(int i=1;i<k;i++){
            ans.pop();
        }
        return ans.top();
    }
};