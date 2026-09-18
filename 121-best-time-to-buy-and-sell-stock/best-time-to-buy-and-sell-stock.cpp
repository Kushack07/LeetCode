class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX; 
        int maxp = 0;
        for(int p : prices){
            minp = min(minp , p);
            maxp = max(maxp , p-minp);
        }
        return maxp ;
    }
};