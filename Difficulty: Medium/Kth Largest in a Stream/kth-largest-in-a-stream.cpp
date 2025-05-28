class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {

        vector<int> ans;
        priority_queue<int, vector<int> , greater<int>> pq;
        for(int i=0; i<k; i++)
        {
            pq.push(arr[i]);
            if(pq.size() == k)
            ans.push_back(pq.top());
            else
            ans.push_back(-1);
        }
        
        for(int i=k; i<n; i++) {
            if(arr[i] > pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
            ans.push_back(pq.top());
        }
        
        return ans;
    }
};