class Node {

public:
    int data;
    Node *next;
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class kStacks {

    vector<Node*> stack;

public:
    kStacks(int n, int k) {
        stack.resize(k, nullptr);
    }

    void push(int x, int i) {
        if(stack[i] == nullptr) {
            stack[i] = new Node(x);
            return;
        }        
        
        Node *newnode = new Node(x);
        newnode->next = stack[i];
        stack[i] = newnode;
    }

    int pop(int i) {
    
        if(stack[i] == nullptr)
        return -1;
        
        int val = stack[i]->data;
        stack[i] = stack[i]->next;
        
        return val;
    }
};