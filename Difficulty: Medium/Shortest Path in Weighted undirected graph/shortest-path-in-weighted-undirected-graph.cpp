class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int,int>> adjlist[n+1];
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adjlist[u].push_back({v,w});
            adjlist[v].push_back({u,w});
        }
        
        vector<bool> explored(n+1,false);
        vector<int> dist(n+1,INT_MAX);
        vector<int> parent(n+1,-1);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,1});
        
        dist[1] = 0;
        
        while(!pq.empty()) {
            
            int node = pq.top().second;
            int w = pq.top().first;
            pq.pop();
            
            if(explored[node])
            continue;
            
            explored[node] = 1;
            
            for(int i=0; i<adjlist[node].size(); i++) {
                int neigh = adjlist[node][i].first;
                int weight = adjlist[node][i].second;
                
                if(!explored[neigh] and dist[neigh] > weight + w) {
                    dist[neigh] = weight + w;
                    parent[neigh] = node;
                    pq.push({dist[neigh],neigh});
                }
            }
        }
        
        vector<int> ans;
        
        // if i cant reach the destination then its parnet must be -1
        if(parent[n] == -1)
        return {-1};
        
        // if i can reach the destination (from node 1 to node n)
        ans.push_back(dist[n]);
        int index = n;
        while(index != -1) {
            ans.push_back(index);
            index = parent[index];
        }
    
        return ans;
    }
};