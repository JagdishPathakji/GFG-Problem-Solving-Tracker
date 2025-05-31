class Solution {
  public:
    
    bool DFS(int node, int parent, vector<vector<int>> &adj, vector<bool> &visited) {
        visited[node] = true;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]]) {
                if(!DFS(adj[node][i],node,adj,visited))
                return 0;
            }
            else if(parent != adj[node][i]){
                return 0;
            }
        }
        
        return 1;
    }
  
    int isTree(int n, int m, vector<vector<int>> &edges) {
        // if the graph has loop means it is not a tree.
        // for v vertices there must be v-1 edges only.
        // Tree is always connected
        if(n-1 != m) {
            return 0;
        }
        
        vector<vector<int>> adj(n);
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            // check for self loops
            if(u == v) return 0;
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // cycle detection algorithm
        vector<bool> visited(adj.size(),false);
        if(!DFS(0,-1,adj,visited))
        return 0;
            
        for(int i=0; i<visited.size(); i++) {
            if(!visited[i])
            return 0;
        }
        
        return 1;
    }
};
