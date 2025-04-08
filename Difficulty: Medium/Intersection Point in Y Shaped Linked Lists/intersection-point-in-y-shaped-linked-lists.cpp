//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x)
        : data(x)
        , next(nullptr) {}
};

void printList(struct Node* head) {
    while (head != nullptr) {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << '\n';
}


// } Driver Code Ends

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
    
        int count1 = 0;
        int count2 = 0;
        
        Node *curr1 = head1;
        Node *curr2 = head2;
        
        while(curr1) {
            count1++;
            curr1 = curr1->next;
        }
        
        while(curr2) {
            count2++;
            curr2 = curr2->next;
        }
        
        curr1 = head1;
        while(count1 > count2) {
            curr1 = curr1->next;
            count1--;
        }
        
        curr2 = head2;
        while(count2 > count1) {
            curr2 = curr2->next;
            count2--;
        }
        
        while(curr1 and curr2) {
            
            if(curr1 == curr2) {
                return curr1;
            }
            
            curr1 = curr1->next;
            curr2 = curr2->next;
        
        }
        
        return new Node(-1);
    }
};



//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        Node *head1 = nullptr, *tail1 = nullptr;
        Node *head2 = nullptr, *tail2 = nullptr;
        Node *head3 = nullptr, *tail3 = nullptr;
        int tmp;
        string input1, input2, input3;

        getline(cin, input1); // Read the entire line for LinkedList1 elements
        stringstream ss1(input1);
        while (ss1 >> tmp) {
            Node* new_node = new Node(tmp);
            if (!head1) {
                head1 = new_node;
                tail1 = new_node;
            } else {
                tail1->next = new_node;
                tail1 = new_node;
            }
        }

        getline(cin, input2); // Read the entire line for LinkedList2 elements
        stringstream ss2(input2);
        while (ss2 >> tmp) {
            Node* new_node = new Node(tmp);
            if (!head2) {
                head2 = new_node;
                tail2 = new_node;
            } else {
                tail2->next = new_node;
                tail2 = new_node;
            }
        }

        getline(cin, input3); // Read the entire line for common LinkedList elements
        stringstream ss3(input3);
        while (ss3 >> tmp) {
            Node* new_node = new Node(tmp);
            if (!head3) {
                head3 = new_node;
                tail3 = new_node;
            } else {
                tail3->next = new_node;
                tail3 = new_node;
            }
        }

        Node* common = head3;

        if (tail1)
            tail1->next = common; // Connecting LinkedList1 to the common list
        if (tail2)
            tail2->next = common; // Connecting LinkedList2 to the common list

        Solution ob;
        Node* intersection = ob.intersectPoint(head1, head2);
        if (intersection) {
            cout << intersection->data << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}

// } Driver Code Ends