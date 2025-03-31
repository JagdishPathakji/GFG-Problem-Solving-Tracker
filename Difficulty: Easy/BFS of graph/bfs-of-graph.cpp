//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        
        int vertex = adj.size();
        vector<bool> visited(vertex,false);
        
        queue<int> q;
        q.push(0);
        visited[0] = true;
        
        vector<int> ans;
        
        while(!q.empty()) {
            
            int node = q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(int i=0; i<adj[node].size(); i++) {
                if(!visited[adj[node][i]]) {
                    visited[adj[node][i]] = true;
                    q.push(adj[node][i]);
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends