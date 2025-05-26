// User function template for C++

class Solution {
  public:
    void DFS(int node, vector<bool> &visited, vector<int> adj[], stack<int> &st) {
        
        visited[node] = true;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]])
            DFS(adj[node][i],visited,adj,st);
        }
        
        st.push(node);
    }
  
    void SCC(int node, vector<bool> &visited, vector<vector<int>> &adj, vector<int> &temp) {
        
        visited[node] = true;
        temp.push_back(node);
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]])
            SCC(adj[node][i],visited,adj,temp);
        }
    }
  
    
    vector<vector<int>> tarjans(int V, vector<int> adj[]) {
        // code here
        // finding the topological sort
        vector<bool> visited(V,0);
        stack<int> st;
        
        for(int i=0; i<visited.size(); i++) {
            if(!visited[i])
            DFS(i,visited,adj,st);
        }
        
        // reversing the edges
        
        vector<vector<int>> adjlist(V);
        for(int i=0; i<V; i++) {
            for(int j=0; j<adj[i].size(); j++) {
                adjlist[adj[i][j]].push_back(i);
            }
        }
        
        // find the SCC using DFS operation
        vector<vector<int>> ans;
        vector<bool> visited2(adjlist.size(),0);
        while(!st.empty()) {
            
            int node = st.top();
            st.pop();
            
            if(!visited2[node]) {
                vector<int> temp;
                SCC(node,visited2,adjlist,temp);
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
              
    }
};