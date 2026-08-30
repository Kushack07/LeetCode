class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        int low = 0; 
        int high = n-1; 
        int sum = 0 ; 
        while(low<n){
            sum =num[low]+num[high];
            if(sum==target){
                return {low+1,high+1};
            }
            else if(sum<target){
                low++;
            }
            else{
                high --;
            }
        }
        return {};
    }
};