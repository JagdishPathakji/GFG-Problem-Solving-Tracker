class Solution {
  public:
    // Function to detect cycle using DSU in an undirected graph.
    bool DFS(int node, int parent, vector<bool> &visited, vector<int> adj[]) {
        
        visited[node] = 1;
        
        for(int i=0; i<adj[node].size(); i++) {
            
            if(parent != adj[node][i] and visited[adj[node][i]]) {
                return 1;
            }
            if(!visited[adj[node][i]]) {
                if(DFS(adj[node][i],node,visited,adj))
                return 1;
            }
        }
        
        return 0;
    }
    
    int detectCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,false);
        for(int i=0; i<V; i++) {
            if(!visited[i] and DFS(i,-1,visited,adj))
            return 1;
        }
        
        return 0;
    }
};