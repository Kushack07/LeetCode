class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum =0 ;
        int lsum =0; 
        for(int i=0 ; i<  n ; i++){
            sum +=nums[i];
        }
        for(int i =0 ;i< n ;i++){
            int right = sum - lsum -nums[i];
            if(lsum==right)
                return i ; 
            lsum = lsum +nums[i];
        }
        return -1;
    }
};