class myStack {
  public:
  
    vector<int> stack;
    int top;
    int n;
    myStack(int n) {
        // Define Data Structures
        stack = vector<int>(n);
        top = -1;
        this->n = n;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == n-1;
    }

    void push(int x) {
        if(isFull()) return;
        stack[++top] = x;
    }

    void pop() {
        if(isEmpty()) return;
        top--;
    }

    int peek() {
        if(isEmpty())
        return -1;
        
        return stack[top];
    }
};