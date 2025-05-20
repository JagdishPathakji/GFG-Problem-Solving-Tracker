class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        vector<bool> visited(adj.size(),false);
        vector<int> ans(adj.size(),-1);
        
        queue<int> q;
        q.push(src);
        visited[src] = true;
        
        int dist = 0;
        while(!q.empty()) {
            
            int k = q.size();
            
            while(k--) {
                
                int node = q.front();
                q.pop();
                
                ans[node] = dist;
                
                for(int i=0; i<adj[node].size(); i++) {
                    if(!visited[adj[node][i]]) {
                        q.push(adj[node][i]);
                        visited[adj[node][i]] = true;
                    }   
                }
            }
            
            dist++;
        }
        
        return ans;
    }
};