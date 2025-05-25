// User function Template for C++

class Solution {
  public:
    
    void DFS(int node, int parent, vector<int> adj[], vector<bool> &visited, vector<bool> &artpoint, vector<int> &discovery, vector<int> &low, int &count) {
        
        visited[node] = 1;
        discovery[node] = count;
        low[node] = count;
        int child = 0;
        
        for(int i=0; i<adj[node].size(); i++) {
            int neigh = adj[node][i];
            if(neigh == parent)
            continue;
            else if(visited[neigh]) {
                low[node] = min(low[node],discovery[neigh]);
            }
            else {
                child++;        
                count++;
                DFS(neigh,node,adj,visited,artpoint,discovery,low,count);
                
                if(discovery[node] <= low[neigh] and parent != -1) {
                    artpoint[node] = 1;
                }
                
                low[node] = min(low[node],low[neigh]);
            }
        }
        
        // for starting node edge case
        if(child > 1 and parent == -1)
        artpoint[node] = 1;
        
    }
  
    vector<int> articulationPoints(int V, vector<int> adj[]) {
        // Code here
        vector<bool> artpoint(V,0);
        vector<bool> visited(V,false);
        vector<int> discovery(V,0);
        vector<int> low(V,0);
        int count = 0;
        
        DFS(0,-1,adj,visited,artpoint,discovery,low,count);
        
        vector<int> ans;
        for(int i=0; i<V; i++) {
            if(artpoint[i])
            ans.push_back(i);
        }
        
        if(ans.size() == 0)
        return {-1};
        
        return ans;
    }
};