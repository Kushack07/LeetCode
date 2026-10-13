class Solution {
public:

    void dfs(int city , vector<vector<int>>&isConnected,vector<bool>& visited){
        //mark the curreent city as visited 
        visited[city]=true;
        //cheack every city to find its direct connections.
        for(int j =0 ; j< isConnected.size(); j++){
            if(isConnected[city][j]==1 && !visited[j]){
                dfs(j,isConnected,visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>visited(n,false);
        int pro = 0 ; 
        // univisted city indicate a new provience 
        for (int i=0 ; i < n; i++){
            if(!visited[i]){
                pro++;
                dfs(i , isConnected, visited); // the missing line 
            }
        }
        return pro; 
    }
};