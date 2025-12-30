/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

// class Node {
//     public:
        
//         int data;
//         Node *next;
        
//         Node(int data) {
//             this->data = data;
//             this->next = NULL;
//         }
// };

class myStack {

  public:
    
    Node *head = nullptr;
    int s = 0;
  
    myStack() {
        // Initialize your data members
    }

    bool isEmpty() {
        return head == NULL;
    }

    void push(int x) {
        
        s++;
        if(!head) {
            head = new Node(x);
            return;
        }
        
        Node *newnode = new Node(x);
        newnode->next = head;
        head = newnode;
    }

    void pop() {
        if(isEmpty()) return;
        
        head = head->next;
        s--;
    }

    int peek() {
        if(isEmpty()) return -1;
        return head->data;
    }

    int size() {
        return s;
    }
};