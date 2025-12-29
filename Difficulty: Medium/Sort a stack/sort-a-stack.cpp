class Solution {
  public:
    void sortStack(stack<int> &st) {
        
        stack<int> s;
        
        while(!st.empty()) {
            
            int top = st.top();
            st.pop();
            
            if(s.empty()) {
                s.push(top);
                continue;
            }
            
            vector<int> v;
            while(!s.empty() && s.top() < top) {
                v.push_back(s.top());
                s.pop();
            }
            
            s.push(top);
            for(int i=v.size()-1; i>=0; i--) {
                s.push(v[i]);
            }
        }
        
        while(!s.empty()) {
            st.push(s.top());
            s.pop();
        }
    }
};
