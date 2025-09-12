// User function Template for C++

class Solution {
  public:
    void DFS(int i, vector<bool> &visited, vector<vector<int>> &adj) {
        
        visited[i] = true;
        
        for(int j=0; j<adj[i].size(); j++) {
            if(!visited[j] and adj[i][j]) {
                DFS(j,visited,adj);
            }   
        }
    }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        
        int count = 0;
        vector<bool> visited(V,false);
        
        for(int i=0; i<V; i++) {
            if(!visited[i]) {
                count++;
                DFS(i,visited,adj);
            }
        }
        
        return count;
    }
};




