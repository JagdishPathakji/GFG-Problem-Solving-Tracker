class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int findparent(int u, vector<int> &parent) {
        
        if(u == parent[u])
        return u;
        
        // path compression
        return parent[u] = findparent(parent[u],parent);
    }
    
    void unionbyrank(int u, int v, vector<int> &parent, vector<int> &size) {
        
        int pu = findparent(u,parent);
        int pv = findparent(v,parent);
        
        if(size[pu] >= size[pv]) {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
        else if(size[pv] > size[pu]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
    }
    
    int spanningTree(int V, vector<vector<int>> adj[]) {
    
        // Ultimate parent will help us to determine the set
        vector<int> parent(V);
        // It will help us to merge the set
        vector<int> size(V,0);
        
        for(int i=0; i<V; i++) {
            parent[i] = i;
        }
        
        // Priority Queue
        vector<pair<int,pair<int,int>>> temp;
        for(int i=0; i<V; i++) {
            for(int j=0; j<adj[i].size(); j++) {
                temp.push_back({adj[i][j][1],{i,adj[i][j][0]}});
            }
        }
        
        // doing this way will reduce the complexity of pushing nodes from ElogE to E.
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq(temp.begin(),temp.end());
        
        int cost = 0;
        int edges = 0;
        while(!pq.empty()) {
            
            auto top = pq.top();
            pq.pop();
            
            int wt = top.first;
            int u = top.second.first;
            int v = top.second.second;
            
            // check if u and v are in same set or different set
            if(findparent(u,parent) != findparent(v,parent)) {
                cost += wt;
                unionbyrank(u,v,parent,size);
                edges++;
            }
            
            // if V-1 edges are obtained then algorithm stops.
            if(edges == V-1)
            break;
            
        }

        return cost;        
        
    }
};