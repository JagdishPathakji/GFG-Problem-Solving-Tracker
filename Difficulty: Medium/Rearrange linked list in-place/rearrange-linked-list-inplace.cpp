//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *inPlace(Node *root) {
        
        vector<Node*> v;
        Node *curr = root;
        
        while(curr) {
            v.push_back(curr);
            curr = curr->next;
        }
        
        int i=0;
        int j=v.size()-1;
        Node *prev = v[0];
        
        int count = 0;
        while(i < j) {
            
            if(count%2 == 0) {
                prev->next = v[j];
                i++;
            }
            else {
                prev->next = v[i];
                j--;
            }
            
            
            count++;
            prev = prev->next;
        }
        
        prev->next = nullptr;
        return v[0];
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }
        Node *head = nullptr;
        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node *tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        Node *ans = ob.inPlace(head);
        printList(ans);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends