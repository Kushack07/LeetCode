class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX;
        int maxp = INT_MIN;
        for(int p : prices){
            minp = min(minp,p);
            maxp = max(maxp ,p-minp);
        } 
        return maxp ; 
    }
};