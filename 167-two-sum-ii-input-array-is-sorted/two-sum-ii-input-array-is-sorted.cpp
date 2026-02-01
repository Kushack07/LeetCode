class Solution {
public:
    vector<int> twoSum(vector<int>& s, int target) {
        int n =s.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            int ans=s[left]+s[right];
            if(ans<target){
                left++;
            }else if(ans>target){
                right--;
            }
            else{
                return {left+1,right+1};
            }
        }
        return {};
    }
};