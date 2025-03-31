//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    void DFS(int node, vector<vector<int>> &adj, vector<int> &ans, vector<bool> &visited) {
        
        visited[node] = 1;
        ans.push_back(node);
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]]) {
                visited[adj[node][i]] = 1;
                DFS(adj[node][i],adj,ans,visited);
            }   
        }
        
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int vertex = adj.size();
        vector<bool> visited(vertex,false);
    
        vector<int> ans;
        DFS(0,adj,ans,visited);
        
        return ans;
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
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends