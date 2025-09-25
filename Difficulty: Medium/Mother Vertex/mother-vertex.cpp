class Solution {
  public:
    
    void DFS(int node, vector<int> adj[], vector<bool> &visited, int &count) {
     
        visited[node] = true;
        count = count + 1;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]])
            DFS(adj[node][i],adj,visited,count);
        }
    }
    
    int findMotherVertex(int V, vector<int> adj[]) {
        
        for(int i=0; i<V; i++) {
            vector<bool> visited(V,false);
            int count = 0;
            DFS(i,adj,visited,count);
            if(count == V)
            return i;
        }
        
        return -1;
    }
};