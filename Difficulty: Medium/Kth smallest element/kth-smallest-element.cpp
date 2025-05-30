class Solution {
  public:
    int kthSmallest(vector<int>& arr, int k) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(),arr.end());
        
        while(k-- and !pq.empty()) {
            if(k == 0)
            return pq.top();
            pq.pop();
        }
        
        return -1;
    }
};
