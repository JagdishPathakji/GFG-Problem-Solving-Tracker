// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        
        // bellford workd with edges so no need to create adjlist
        vector<int> distance(V,1e8);
        distance[src] = 0;
        
        int e = edges.size();
        
        // relax all the edges V-1 times
        for(int i=0; i<V-1; i++) {
            
            // relaxing all the edges
            for(int j=0; j<e; j++) {
                
                int u = edges[j][0];
                int v = edges[j][1];
                int w = edges[j][2];
                
                if(distance[u] == 1e8)
                continue;
                
                if(distance[v] > distance[u]+w) {
                    distance[v] = distance[u]+w;
                }
                
            }
        }
        
        // relaxing one more time to detect the cycle
        for(int j=0; j<e; j++) {
                
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];
                
            if(distance[u] == 1e8)
            continue;
                
            if(distance[v] > distance[u]+w) {
                return {-1};
            }
        }
        
        return distance;
    }
};
