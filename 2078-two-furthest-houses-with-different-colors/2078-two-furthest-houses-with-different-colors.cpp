class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size() ; 
        vector<vector<int>> nums(n,vector<int>(n,-1)) ; 
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(colors[j] != colors[i])nums[i][j] = j-i ; 
            }
        }
        bool flag = false ; 
        int maximum = -1 ; 
          for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(nums[i][j] != -1)
                {
                    flag = true ; 
                    maximum = max(maximum , nums[i][j]) ; 
                } 
            }
        }
        return flag ? maximum  : 0 ; 
    }
};