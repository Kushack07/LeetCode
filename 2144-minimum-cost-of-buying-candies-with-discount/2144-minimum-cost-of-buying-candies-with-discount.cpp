
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int c = 0;
        int cst = 0;
        sort(cost.begin(), cost.end());
        for(int i = n-1; i >= 0; i --){
            c++;
            if(c%3 == 0)continue;
            cst += cost[i];
        }
        return cst;
    }
};