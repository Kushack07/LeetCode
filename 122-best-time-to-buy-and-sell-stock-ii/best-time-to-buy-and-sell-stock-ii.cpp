class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int buy = prices[0];
        int len = prices.size();
        for(int i = 1;i<len; i++){
            if(buy < prices[i]){
                max += prices[i] - buy;
            }
            buy = prices[i];
        }
        return max;
    }
};