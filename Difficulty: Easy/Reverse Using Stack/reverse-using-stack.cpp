class Solution {
  public:
    string reverse(const string& s) {
        // code here
        string ans = "";
        stack<char> st;
        
        for(int i=0; i<s.size(); i++)
        st.push(s[i]);
        
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};