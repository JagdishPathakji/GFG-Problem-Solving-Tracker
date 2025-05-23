class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    void DFS(int node, vector<bool> &visited, vector<int> adj[], int destination, int &count) {
        
        visited[node] = true;
        
        if(node == destination) {
            count++;
            visited[node] = false;
            return;
        }
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]])
            DFS(adj[node][i],visited,adj,destination,count);
        }
        
        visited[node] = false;
    }
    
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        vector<bool> visited(V,false);
        int count = 0;
        DFS(source,visited,adj,destination,count);
        
        return count;
    }
};