class Solution {
  public:
    
    void DFS(int target, int node, vector<vector<int>> &ans, vector<vector<int>> &adjlist, vector<bool> &visited) {
        
        visited[node] = true;
        for(int i=0; i<adjlist[node].size(); i++) {
            if(!visited[adjlist[node][i]]) {
                ans[target].push_back(adjlist[node][i]);
                DFS(target,adjlist[node][i],ans,adjlist,visited);
            }
        }
    }

    vector<vector<int>> findAnc(int V, vector<vector<int>> &edges) {
        
        vector<vector<int>> ans(V);
        vector<vector<int>> adjlist(V);
        
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adjlist[v].push_back(u);
        }
        
        for(int i=0; i<V; i++) {
            vector<bool> visited(V,false);
            DFS(i,i,ans,adjlist,visited);
            sort(ans[i].begin(),ans[i].end());
        }
        
        return ans;
    }
};
