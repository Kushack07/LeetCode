class Solution {
public:
    int removeElement(vector<int>& a, int v) {
        int n = a.size();
        int k = 0;
        for(int i=0;i<n;i++){
            if(a[i]!=v){
                a[k]=a[i];//a[k]=333333
                k++;
            }
        }
        return k;
    }
};
/*
Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
val=2
nums
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/