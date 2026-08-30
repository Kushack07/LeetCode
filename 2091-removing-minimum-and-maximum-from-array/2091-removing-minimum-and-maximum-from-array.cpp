class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        int low =0; 
        int high =n-1; 
        vector<int>ans; 
        vector<int>gg;
        int mine = *min_element(nums.begin(),nums.end());
        int maxe = *max_element(num.begin(),nums.end());
        int cnt1= 0 ;
        int cnt2 = 0 ; 
        for(int i = 0 ; i< n; i++){
            if(nums[i]==mine){
                cnt1++;
            }
            if(nums[i]==maxe){
                cnt2++;
            }
        }
        if(cnt1>cnt2){
            swap(cnt1,cnt2);
        }
        int minlen = cnt2-low+1;
        int maxlen= high -cnt1 +1;
        int mix = cnt1 - low+1 + high-maxlen+1;
        return min({minlen , maxlen , mix});
    }
};