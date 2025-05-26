//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
    bool DFS(int node, vector<vector<int>> adj, vector<bool> visited, int &count, int n) {
        
        visited[node] = true;
        count++;
        
        if(count == n)
        return 1;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]] and DFS(adj[node][i],adj,visited,count,n)) 
            return 1;
        }
        
        visited[node] = false;
        count--;
        return 0;
    }
    
    bool check(int n, int m, vector<vector<int>> edges) {
        
        // preparing the adjlist
        vector<vector<int>> adjlist(n);
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adjlist[u-1].push_back(v-1);
            adjlist[v-1].push_back(u-1);
        }
        
        vector<bool> visited(n,0);
        int count = 0; // if count == n then all nodes visited in path
        for(int i=0; i<n; i++) {
            if(DFS(i,adjlist,visited,count,n))
            return 1;
        }
        
        return 0;        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            edges.push_back({x, y});
        }
        Solution obj;
        if (obj.check(n, m, edges)) {
            cout << "1" << endl;
        } else
            cout << "0" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends