class Solution {
public:
    bool judgeSquareSum(int c) {
        vector<long long >ans ;
        int sum =0; 
        for(long long i =0 ; i*i <=c ;i++){
            ans.push_back(i*i);
        }
        int low=0; 
        int high=ans.size()-1; 
        while(low<=high){
            if(ans[low]+ans[high]==c){
                return true;
            }else if(ans[low]+ans[high]<c){
                low++;
            }else{
                high--;
            }
        }
        return false;
    }
};