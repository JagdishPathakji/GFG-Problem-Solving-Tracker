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
    
    int isEulerCircuit(int V, vector<int> adj[]) {
        // Code here
        // 1. calculate the degree for all the nodes.
        // 2. if any of the node has odd degree then it is definitely not an EC.
        // 3. if all nodes has degree even and all components are connected then it is EC.
        // 4. if exactly zero or exactly two nodes have odd degree and all components are are connected then it is an EP.
        
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
        // EC
        if(countodd == 0)
        return 2;
        
        // EP
        return 1;
    }
};