class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int min = *min_element(nums1.begin(),nums1.end());
        int ax  = 0 ; 
        for(int x:nums1){
            if (x%2==1 && min%2==0){
                return false;
            }
        }
        return true;
    }
};