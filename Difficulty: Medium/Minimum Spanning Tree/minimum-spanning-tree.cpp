class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int findparent(int u, vector<int> &parent) {
        
        if(u == parent[u])
        return u;
        
        // path compression
        return parent[u] = findparent(parent[u],parent);
    }
    
    void unionbyrank(int u, int v, vector<int> &parent, vector<int> &rank) {
        
        int pu = findparent(u,parent);
        int pv = findparent(v,parent);
        
        if(rank[pu] > rank[pv]) {
            parent[pv] = pu;
        }
        else if(rank[pv] > rank[pu]) {
            parent[pu] = pv;
        }
        else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
    
    int spanningTree(int V, vector<vector<int>> adj[]) {
    
        /* Prims 
        vector<bool> isMST(V,false);
        vector<int> parent(V,-1);
        int cost = 0;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,-1}});
        
        while(!pq.empty()) {
            
            auto top = pq.top();
            pq.pop();
            
            int wt = top.first;
            int node = top.second.first;
            int prt = top.second.second;
            
            if(isMST[node])
            continue;
            
            isMST[node] = 1;
            cost = cost + wt;
            parent[node] = prt;
            
            for(int i=0; i<adj[node].size(); i++) {
                if(!isMST[adj[node][i][0]]) {
                    pq.push({adj[node][i][1],{adj[node][i][0],node}});
                }
            }
        }
        
        return cost;
        */
        
        // Ultimate parent will help us to determine the set
        vector<int> parent(V);
        // It will help us to merge the set
        vector<int> rank(V,0);
        
        for(int i=0; i<V; i++) {
            parent[i] = i;
        }
        
        // Priority Queue
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        for(int i=0; i<V; i++) {
            for(int j=0; j<adj[i].size(); j++) {
                pq.push({adj[i][j][1],{i,adj[i][j][0]}});
            }
        }
        
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
                unionbyrank(u,v,parent,rank);
                edges++;
            }
            
            //
            if(edges == V-1)
            break;
            
        }

        return cost;        
        
    }
};