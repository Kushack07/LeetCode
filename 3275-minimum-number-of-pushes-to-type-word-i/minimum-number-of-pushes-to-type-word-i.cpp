class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int total_cost=0 ;
        for(int i=0;i<n;i++){
            total_cost+=i/8+1;
        }
        return total_cost;
    }
};