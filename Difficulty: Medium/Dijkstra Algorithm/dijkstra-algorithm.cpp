// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<pair<int,int>> adjlist[V];
        
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adjlist[u].push_back({v,w});
            adjlist[v].push_back({u,w});
        }
        
        vector<bool> explored(V,false);
        vector<int> dist(V,INT_MAX);
        
        dist[src] = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,src});
        
        while(!pq.empty()) {
            
            int node = pq.top().second;
            pq.pop();
            
            if(explored[node] == 1)
            continue;
            
            explored[node] = 1;
            
            // Relax the edges (v-1 time)
            for(int i=0; i<adjlist[node].size(); i++) {
                int neighbour = adjlist[node][i].first;
                int weight = adjlist[node][i].second;
                if(!explored[neighbour] and (dist[neighbour] > dist[node]+weight)) {
                    dist[neighbour] = dist[node] + weight;
                    pq.push({dist[neighbour],neighbour});
                }    
            }
            
        }
            
        return dist;
    }
};
