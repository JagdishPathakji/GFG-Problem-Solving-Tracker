// User function Template for C++

class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>>& arr, int K) {
        // code here
        vector<int> ans;
        
        vector<pair<int,pair<int,int>>> temp;
        for(int i=0; i<arr.size(); i++) {
            temp.push_back({arr[i][0],{i,0}});
        }
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq(temp.begin(),temp.end());
        
        while(!pq.empty()) {
            
            int val = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            pq.pop();
            
            ans.push_back(val);
            
            if(j+1 < arr[i].size())
            pq.push({arr[i][j+1],{i,j+1}});
        }
        
        return ans;
    
    }
};