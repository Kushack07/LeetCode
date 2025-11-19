class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n =arr.size();
        int noDel =arr[0];
        int oneDel=0;
        int ans = arr[0];
        for(int i =1;i<n;i++){
            int x =arr[i];
            oneDel = max(noDel,oneDel+x);
            noDel =max(noDel+x,x);
            ans = max(ans,max(noDel,oneDel));
        }
        return ans;
    }
};