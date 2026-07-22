class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int suml = 0;
        int sumr =0; 
        int ts =0; 
        for(int i =0;i<n;i++){
            ts += nums[i];
        }
        for(int i=0;i<n;i++){
            sumr = ts-suml-nums[i];
            if(suml==sumr)
                return i ; 
            suml = suml+nums[i]; 
        }
        return -1;
    }
};