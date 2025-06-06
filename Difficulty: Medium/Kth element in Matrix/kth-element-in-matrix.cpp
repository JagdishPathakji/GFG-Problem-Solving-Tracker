class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({matrix[0][0],{0,0}});
        k--;
        
        while(!pq.empty() and k--) {
            
            int val = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
    
            pq.pop();
            
            if(i+1 < matrix.size() and matrix[i+1][j] != -1) {
                pq.push({matrix[i+1][j],{i+1,j}});
                matrix[i+1][j] = -1;
            }
            if(j+1 < matrix[i].size() and matrix[i][j+1] != -1) {
                pq.push({matrix[i][j+1],{i,j+1}});
                matrix[i][j+1] = -1;
            }
        }
        
        return pq.top().first;
    }
};