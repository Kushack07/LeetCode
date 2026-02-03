class Solution {
public:
    vector<int> twoSum(vector<int>& x, int t) {
        int n = x.size();
        int low= 0 ; 
        int high = n-1; 
        while(low<high){
            int ans = x[low]+x[high];
            if(ans == t){
                return {low+1,high+1};
            }
            else if(ans<t){
                low++;
            }
            else if (ans>t){
                high--; 
            }
        }
        return {};
    }
};