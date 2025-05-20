// User function Template for C++
class Solution {
  public:
    
    void DFS(int node, vector<pair<int,int>> adjlist[], vector<bool> &visited, stack<int> &st) {
        
        visited[node] = true;
        
        for(int i=0; i<adjlist[node].size(); i++) {
            if(!visited[adjlist[node][i].first]) {
                DFS(adjlist[node][i].first,adjlist,visited,st);
            }   
        }
        
        st.push(node);
    }
    
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<pair<int,int>> adjlist[V];
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adjlist[u].push_back({v,w});
        }
        
        stack<int> st;
        vector<bool> visited(V,false);
        
        DFS(0,adjlist,visited,st);
        vector<int> ans(V,INT_MAX);
        
        ans[0] = 0;
        while(!st.empty()) {
            
            int node = st.top();
            st.pop();
            
            for(int i=0; i<adjlist[node].size(); i++) {
                int edge = adjlist[node][i].first;
                int weight = adjlist[node][i].second;
                
                ans[edge] = min(ans[edge],ans[node]+weight);
            }
        }
        
        for(int i=0; i<V; i++) {
            if(ans[i] == INT_MAX)
            ans[i] = -1;
        }
        
        return ans;
    }
};
