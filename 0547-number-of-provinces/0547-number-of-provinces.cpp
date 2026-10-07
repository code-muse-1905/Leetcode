class Solution {
public:
 unordered_map<int, list<int>> matrixToMap(
        int V,vector<vector<int>>& matrix
    ) {
        unordered_map<int, list<int>> adj;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (matrix[i][j] == 1) {
                adj[i].push_back(j);
                }
            }
        }
        return adj;
    }
    void dfs(
        int node,
        unordered_map<int, list<int>>& adj,
        unordered_map<int, bool>& visited
    ) {
        visited[node] = true;
        for (auto neighbour : adj[node]) {
            if (!visited[neighbour]) {
            dfs(neighbour, adj, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
       int v=isConnected.size();
       unordered_map<int,list<int>>adj=matrixToMap(v,isConnected);
       unordered_map<int,bool>visited;
       int prov=0;
       for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(i,adj,visited);
            prov++;
        }
       } 
       return prov;
    }
};