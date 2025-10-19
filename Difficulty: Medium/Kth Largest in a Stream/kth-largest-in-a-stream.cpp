class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        
        vector<int> ans(n);
        
        if(k > n) {
            fill(ans.begin(),ans.end(),-1);
            return ans;
        }
        
        priority_queue<int, vector<int>, greater<int>> pq;
        int i;
        for(i=0; i<k-1; i++) {
            pq.push(arr[i]);
            ans[i] = -1;
        }
        
        while(i < n) {
            
            pq.push(arr[i]);
            
            if(pq.size() > k) {
                pq.pop();
            }
            
            ans[i] = pq.top();
            i++;
        }
        
        return ans;
    }
};