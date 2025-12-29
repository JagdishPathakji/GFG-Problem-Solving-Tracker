class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n,-1);
        
        
        for(int i=0; i<arr.size(); i++) {
            
            while(!st.empty() && arr[i] > arr[st.top()]) {
                ans[st.top()] = arr[i];
                st.pop();
            }    
            
            st.push(i);
        }
        
        return ans;
    }
};