class Solution {
  public:
    int minParentheses(string& s) {
        
        stack<char> st;
        
        for(int i=0; i<s.size(); i++) {
            
            if(s[i] == '(') {
                st.push(s[i]);
            }
            else {
                if(!st.empty() && st.top() == '(') {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
        }
        
        return st.size();
    }
};