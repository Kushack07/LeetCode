class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans; 
        for(int i=0; i <nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int j =0; j <nums2.size();j++){
            ans.push_back(nums2[j]);
        }
        sort(ans.begin(),ans.end());
        int m= ans.size();
        if(m%2==0){
            return (ans[m/2-1]+ans[m/2])/2.0;
        }
        return ans[m/2];
    }
};