class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n =nums.size();
        int minlen = 0 ;
        int maxlen = 0; 
        int high = n-1;
        int low = 0 ; 
        int x1  =0 ; 
        int x2 = 0 ;
        int maxe = *max_element(nums.begin(),nums.end());
        int mine = *min_element(nums.begin(),nums.end());
        for(int i =0 ;i < n ;i++){
            if(nums[i]==mine){
                x2 = i ; 
            }
            if(nums[i]==maxe){
                x1 = i ; 
            }
        }
        if(x2>x1){
            swap(x2,x1);
        }
        minlen = x1-low+1;//high-low+1
        maxlen = high-x2+1;
        int mix = x2-low+1+high -x1+1; 
        return min({minlen , maxlen , mix});
    }
};