class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        set<int> sums;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                sums.insert(grid[i][j]); // size 0 rhombus

                for(int k = 1; i-k >=0 && i+k < n && j-k >=0 && j+k < m; k++){

                    int sum = 0;

                    for(int d = 0; d < k; d++){
                        sum += grid[i-k+d][j+d];
                        sum += grid[i+d][j+k-d];
                        sum += grid[i+k-d][j-d];
                        sum += grid[i-d][j-k+d];
                    }

                    sums.insert(sum);
                }
            }
        }

        vector<int> ans;
        for(auto it = sums.rbegin(); it != sums.rend() && ans.size() < 3; it++){
            ans.push_back(*it);
        }

        return ans;
    }
};