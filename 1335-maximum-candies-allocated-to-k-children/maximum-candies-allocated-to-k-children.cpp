class Solution {
public:
    int maximumCandies(vector<int>& can, long long k) {
        int low=1;
        int high=*max_element(can.begin(),can.end());
        int ans=0; 
        int n = can.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            long long child =0;
            for(int i=0;i<n;i++){
                child+=can[i]/mid; 
            }
            if(child >=k){
                ans = mid ; 
                low = mid +1; 
            }else{
                high=mid-1;
            }
        }
        return ans ; 
    }
};