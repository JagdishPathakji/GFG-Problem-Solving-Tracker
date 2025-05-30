class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        
        for(int i=0; i<points.size(); i++) {
            int u = points[i][0];
            int v = points[i][1];
            int ans = sqrt(u*u + v*v);
            pq.push({ans,{u,v}});
        }
        
        while(!pq.empty() and k--) {
            if(k < 0)
            break;
            
            int val = pq.top().first;
            int u = pq.top().second.first;
            int v = pq.top().second.second;
            pq.pop();
            
            ans.push_back({u,v});
        }
        
        return ans;
    }
};