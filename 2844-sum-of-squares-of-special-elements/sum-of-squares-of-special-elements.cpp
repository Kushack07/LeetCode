class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n =nums.size();
        int sum =0; 
        int low= 0; 
        int high = n-1; 
        while(low<=high){
            if(n%(low+1)==0){
                sum += nums[low]*nums[low];
            }
            low++;
        }
        return sum;
    }
};