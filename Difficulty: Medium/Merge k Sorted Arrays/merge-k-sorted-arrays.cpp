class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        // code here
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<arr.size(); i++) {
            for(int j=0; j<arr[i].size(); j++) {
                pq.push(arr[i][j]);
            }
        }
        
        while(!pq.empty()) {
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
};