//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution {

  public:
    Node* sortList(Node* head) {
        // Your Code Here
    
        vector<int> v;
        Node *curr = head;
        
        while(curr) {
            v.push_back(curr->data);
            curr = curr->next;
        }
        
        sort(v.begin(),v.end());
        
        curr = head;
        int i = 0;
        while(curr) {
            curr->data = v[i];
            i++;
            curr = curr->next;
        }
        
        return head;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

    int t = 0;
    int n = 0;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }
        Solution ob;
        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        head = ob.sortList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends