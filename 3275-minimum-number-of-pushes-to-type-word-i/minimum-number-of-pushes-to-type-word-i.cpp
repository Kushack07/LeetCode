class Solution {
public:
    int minimumPushes(string word) {
        int total_cost =0;
        int n =word.size(); 
        for(int i=0;i<n;i++){
            total_cost += i/8+1;
        }
        return total_cost;
    }
};