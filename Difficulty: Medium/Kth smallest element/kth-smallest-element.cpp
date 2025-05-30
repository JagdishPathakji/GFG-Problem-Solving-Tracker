
class Solution {
  public:
    // Function to find the kth smallest element in the array.
    int kthSmallest(vector<int>& arr, int k) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(),arr.end());
        
        while(k-- and !pq.empty()) {
            if(k == 0)
            return pq.top();
            pq.pop();
        }
        
        return -1;
    }
};
