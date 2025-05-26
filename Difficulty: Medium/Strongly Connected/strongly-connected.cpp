//Position this line where user code will be pasted.
class Solution {
  public:
    
    void DFS(int node, vector<bool> &visited, vector<vector<int>> &adj, stack<int> &st) {
        
        visited[node] = true;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]])
            DFS(adj[node][i],visited,adj,st);
        }
        
        st.push(node);
    }
  
    void SCC(int node, vector<bool> &visited, vector<vector<int>> &adj) {
    
        visited[node] = true;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]])
            SCC(adj[node][i],visited,adj);
        }
    }
  
    int kosaraju(vector<vector<int>> &adj) {
        // code here
        
        // finding the topological sort
        vector<bool> visited(adj.size(),0);
        stack<int> st;
        for(int i=0; i<visited.size(); i++) {
            if(!visited[i])
            DFS(i,visited,adj,st);
        }
        
        // reversing the edges
        vector<vector<int>> adjlist(adj.size());
        for(int i=0; i<adj.size(); i++) {
            for(int j=0; j<adj[i].size(); j++) {
                adjlist[adj[i][j]].push_back(i);
            }
        }
        
        // find the SCC using DFS operation
        int count = 0;
        vector<bool> visited2(adjlist.size(),0);
        while(!st.empty()) {
            
            int node = st.top();
            st.pop();
            
            if(!visited2[node]) {
                SCC(node,visited2,adjlist);
                count++;
            }
        }
        
        return count;
        
    }
};