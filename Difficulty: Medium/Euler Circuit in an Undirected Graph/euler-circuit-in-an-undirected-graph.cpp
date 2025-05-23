class Solution {
  public:
    
    void DFS(int node, vector<bool> &visited, vector<int> adj[]) {
        
        visited[node] = 1;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]]) {
                DFS(adj[node][i],visited,adj);
            }
        }
    }
    
  
    bool isEularCircuitExist(int V, vector<int> adj[]) {
        // Code here
         vector<int> degree(V,0);
        for(int i=0; i<V; i++) {
            degree[i] = adj[i].size();
        }
        
        
        int countodd = 0;
        for(int i=0; i<V; i++) {
            if(degree[i]%2 != 0)
            countodd++;
        }
        
        // if this happens , it is not EP i.e it is also not an EC.
        if(countodd != 2 and countodd != 0)
        return 0;
        
        vector<bool> visited(V,0);
        for(int i=0; i<V; i++) {
            if(degree[i]) {
                DFS(i,visited,adj);
                break;
            }
        }
        
        for(int i=0; i<V; i++) {
            if(degree[i] != 0 and !visited[i]) {
                return 0;
            }
        }
        
        // now it is either EC or EP.
        if(countodd == 0)
        return 1;
        
        return 0;
        
    }
};