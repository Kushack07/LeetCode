class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = INT_MAX;
        int maxp= 0; 
        for(int p : prices){
            mp = min (mp,p);
            maxp = max(maxp ,p-mp);
        }
        return maxp;
    }
};