class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        // Your code here
        priority_queue<int> pq(arr.begin(),arr.end());
        
        while(k-- and !pq.empty()) {
            if(k == 0)
            return pq.top();
            pq.pop();
        }
        
        return -1;
    }
};