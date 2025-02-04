//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node* head);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    struct Node* modifyTheList(struct Node* head) {
    
        using node = Node;
        node *curr = head;
        vector<int> v;
        
        while(curr) {
            v.push_back(curr->data);
            curr = curr->next;
        }
        
        int start = 0;
        int end = v.size()-1;
        
        while(start < end) {
            int temp = v[start];
            v[start] = v[end] - v[start];
            v[end] = temp;
            start++;
            end--;
        }
        
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
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }
        Solution obj;
        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        head = obj.modifyTheList(head);
        print(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends