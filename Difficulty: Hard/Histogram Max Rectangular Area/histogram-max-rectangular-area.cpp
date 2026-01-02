class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        
        stack<int> st1;
        stack<int> st2;
        
        int n = arr.size();
        vector<int> v1(n,1);
        vector<int> v2(n,1);
        
        for(int i=n-1; i>=0; i--) {
            
            while(!st1.empty() && arr[st1.top()] >= arr[i]) {
                v1[i] += v1[st1.top()];
                st1.pop();
            }
            st1.push(i);
        }
        
        for(int i=0; i<n; i++) {
            
            while(!st2.empty() && arr[i] <= arr[st2.top()]) {
                v2[i] += v2[st2.top()];
                st2.pop();
            }
            st2.push(i);
        }

        int maxi = INT_MIN;
        for(int i=0; i<n; i++) {
            maxi = max(maxi, (v1[i]+v2[i]-1)*arr[i]);
        }
        
        return maxi;
    }
};
