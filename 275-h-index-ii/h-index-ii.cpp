class Solution {
public:
    int hIndex(vector<int>& a) {
        int n= a.size();
        int low =0;
        int high = n-1; 
        while(low<=high){
            int mid = low+(high-low)/2;
            int paper = n-mid ; 
            if(a[mid]>=paper){
                high = mid -1;
            }else{
                low = mid+1;
            }
        }
        return n-low;
        
    }
};