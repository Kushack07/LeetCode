class Solution{
public:
    int pivotIndex(vector<int>&nums){
        int n = nums.size();
        int slow =0 ;
        int fast =0; 
        int total_sum =0 ; 
        int lsum =0 ;
        for(int num : nums){
            total_sum +=num;
        }
        for(int i =0;i<n;i++){
            if(lsum ==total_sum -lsum - nums[i]){
                return i; 
            }
            lsum +=nums[i];
        }
    return -1;
    }
};