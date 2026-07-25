class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
            int digit = n%10;
            ans.push_back(digit);
            n/=10;
        }
        int maxp ;
        for(int i=0; i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                maxp = max(maxp,ans[i]*ans[j]);
            }   
        }
        return maxp ; 
    }
};