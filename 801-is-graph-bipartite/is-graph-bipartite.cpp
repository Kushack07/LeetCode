class Solution {
public:
    bool dfs(int node, int col, vector<vector<int>>& graph, vector<int>& visited) {
        visited[node] = col; // Paint the current node
        
        for (auto const &it : graph[node]) {
            // If neighbor is unvisited, recurse with the opposite color
            if (visited[it] == -1) {
                if (!dfs(it, 1 - col, graph, visited)) {
                    return false;
                }
            } 
            // If neighbor already has the same color, conflict found!
            else if (visited[it] == col) {
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> visited(V, -1);
        
        // Loop handles disconnected graph components
        for (int i = 0; i < V; i++) {
            if (visited[i] == -1) {
                if (!dfs(i, 0, graph, visited)) {
                    return false;
                }
            }
        }
        return true;
    }
};