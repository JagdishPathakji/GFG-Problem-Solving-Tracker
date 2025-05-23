
class Solution {
  public:
    
    void DFS(int node, vector<bool> &visited, vector<int> adjlist[], vector<int> &temp) {
        
        visited[node] = 1;
        temp.push_back(node);
        
        for(int i=0; i<adjlist[node].size(); i++) {
            if(!visited[adjlist[node][i]]) {
                DFS(adjlist[node][i],visited,adjlist,temp);
            }    
        }
        
    }
  
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        vector<bool> visited(V,false);
        vector<vector<int>> ans;
        vector<int> adjlist[V];
        
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        
        vector<int> temp;
        for(int i=0; i<V; i++) {
            if(!visited[i]) {
                DFS(i,visited,adjlist,temp);
                ans.push_back(temp);
                temp = vector<int>();
            }
        }
        
        return ans;
    }
};
