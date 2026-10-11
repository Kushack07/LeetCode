class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int low =0 ; 
        int high = n ; 
        int sum =0; 
        while(low < high){
            if(n%(low+1)==0){
                sum += nums[low]*nums[low];
            }
            low++;
        }
        return sum ;
    }
};