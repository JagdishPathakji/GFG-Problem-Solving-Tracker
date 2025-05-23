// User function Template for C++

class Solution {
  public:
    
    void DFS(int node, vector<bool> &visited, vector<int> adj[]) {
        
        visited[node] = true;
        
        for(int i=0; i<adj[node].size(); i++) {
            if(!visited[adj[node][i]])
            DFS(adj[node][i],visited,adj);
        }
    }
  
    int isCircle(vector<string> &arr) {
        
        // Creating adjlist for finding EC
        vector<int> adj[26];
        vector<int> indegree(26,0);
        vector<int> outdegree(26,0);
        for(int i=0; i<arr.size(); i++) {
            string temp = arr[i];
            int u = temp[0]-'a';
            int v = temp[temp.size()-1]-'a';
            adj[u].push_back(v);
            
            // Eulerian circuit is present or not
            // Find indegree and outdegree for each node.
            // If indegree == outdegree for each node i.e eulerian circuit is present.
            outdegree[u]++;
            indegree[v]++;
        }
        
        // If any element has indegree != outdegree return 0
        for(int i=0; i<26; i++) {
            if(indegree[i] != outdegree[i])
            return 0;
        }
        
        // Now checking if all the edges are part of one component or not.
        vector<bool> visited(26,0);
        // DFS from ony node must visit all the other nodes if they are present in one component
        // We can do this DFS from any node       
        int node = arr[0][0]-'a';
        DFS(node,visited,adj);
        
        // we can also use outdegree over below instead of indegree
        for(int i=0; i<visited.size(); i++) {
            if(indegree[i] and !visited[i])
            return 0;
        }
        
        return 1;
    }
};