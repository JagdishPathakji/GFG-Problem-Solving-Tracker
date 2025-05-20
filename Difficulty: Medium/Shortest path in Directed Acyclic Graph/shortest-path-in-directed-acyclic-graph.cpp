// User function Template for C++
class Solution {
  public:
    
    void DFS(pair<int,int> pr, vector<pair<int,int>> adjlist[], vector<int> &distance, vector<bool> &visited) {
        
        if(distance[pr.first] > pr.second) {
            distance[pr.first] = pr.second;
        }
        else {
            return;
        }
        visited[pr.first] = true;
        
        for(int i=0; i<adjlist[pr.first].size(); i++) {
            if(!visited[adjlist[pr.first][i].first]) {
                DFS({adjlist[pr.first][i].first,pr.second+adjlist[pr.first][i].second},adjlist,distance,visited);
            }
        }
        
        visited[pr.first] = false;
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
        
        vector<int> distance(V,INT_MAX);
        vector<bool> visited(V,false);
        pair<int,int> pr;
        pr = make_pair(0,0);
        DFS(pr,adjlist,distance,visited);
        
        for(int i=0; i<V; i++) {
            if(distance[i] == INT_MAX)
            distance[i] = -1;
        }
        
        return distance;
    }
};
