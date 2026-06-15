class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int n = nums.size();
        int g= 0;
        for(int i =0 ; i<n;i++){   
            g= gcd(g,nums[i]);
            if(g==1){
                return true;

            }
        }
        return false;
    }
};