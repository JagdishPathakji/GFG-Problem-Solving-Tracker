class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> adjlist(V);
        vector<int> indegree(V,0);
        
        for(int i=0; i<edges.size(); i++) {
            
            
            int u = edges[i][0];
            int v = edges[i][1];
            adjlist[u].push_back(v);
            indegree[v]++;
        }
        
        queue<int> q;
        for(int i=0; i<V; i++) {
            if(indegree[i] == 0)
            q.push(i);
        }
        
        vector<int> ans;
        
        while(!q.empty()) {
            
            auto node = q.front();
            q.pop();
            
            if(indegree[node] == 0)
            ans.push_back(node);
            
            for(int i=0; i<adjlist[node].size(); i++) {
                indegree[adjlist[node][i]]--;
                if(indegree[adjlist[node][i]] == 0)
                q.push(adjlist[node][i]);
            }
        }
        
        return ans;
        
    }
};