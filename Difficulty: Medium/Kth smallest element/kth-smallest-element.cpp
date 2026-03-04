class Solution {
  public:
    int kthSmallest(vector<int>& arr, int k) {
        
        priority_queue<int> pq;
        for(int i=0; i<arr.size(); i++) {
            if(pq.size() < k) {
                pq.push(arr[i]);
            }
            else {
                if(pq.top() > arr[i]) {
                    pq.pop();
                    pq.push(arr[i]);
                }
            }
        }
        
        return pq.top();
    }
};
