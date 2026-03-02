class Solution {
  public:
    
    stack<char> st1;
    stack<char> st2;
    
    void append(char x) {
        st1.push(x);
    }

    void undo() {
        st2.push(st1.top());
        st1.pop();
    }

    void redo() {
        st1.push(st2.top());
        st2.pop();
    }

    string read() {
       
       string text = "";
       stack<char> temp = st1;
       while(!temp.empty()) {
           text = temp.top() + text;
           temp.pop();
       }
       
       return text;
    }
};