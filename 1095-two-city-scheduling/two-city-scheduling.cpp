#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        // Sort based on the cost difference: (costA - costB)
        sort(costs.begin(), costs.end(), [](const vector<int>& a, const vector<int>& b) {
            return (a[0] - a[1]) < (b[0] - b[1]);
        });
        
        int total_cost = 0;
        int n = costs.size() / 2;
        
        // First N people go to City A, remaining N people go to City B
        for (int i = 0; i < costs.size(); i++) {
            if (i < n) {
                total_cost += costs[i][0]; // City A
            } else {
                total_cost += costs[i][1]; // City B
            }
        }
        
        return total_cost;
    }
};
