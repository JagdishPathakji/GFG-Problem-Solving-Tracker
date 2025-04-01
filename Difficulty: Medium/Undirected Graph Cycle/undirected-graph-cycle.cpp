//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool findcycle(int node, int prev, vector<vector<int>> &adj, vector<bool> &visited) {
        
        visited[node] = true;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(prev == adj[node][i]) {
                continue;
            }
            if(!visited[adj[node][i]]) {
                if(findcycle(adj[node][i],node,adj,visited))
                return 1;
            }
            else {
                return 1;
            }
        }
        
        return 0;
    }
   
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int vertex = adj.size();
        int prev = -1;
        vector<bool> visited(vertex,false);
        
        for(int i=0; i<vertex; i++) {
            if(visited[i] == 0) {
                if(findcycle(i,prev,adj,visited))
                return 1;
            }
        }
        
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        vector<vector<int>> adj(V);

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            if (input.size() == 0)
                continue;
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends