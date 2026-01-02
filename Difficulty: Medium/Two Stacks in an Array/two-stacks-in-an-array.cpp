class twoStacks {
  public:

    vector<int> stack;
    int top1,top2;
    twoStacks() {
        stack = vector<int>(200);
        top1 = -1;
        top2 = 200;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        if(top2 - top1 == 1) 
        return;
        
        stack[++top1] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        if(top2 - top1 == 1)
        return;
        
        stack[--top2] = x; 
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(top1 == -1)
        return -1;
        
        return stack[top1--];
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        if(top2 == 200)
        return -1;
        
        return stack[top2++];
    }
};