//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head) {
    if (head == NULL)
        return;
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void append(struct Node **headRef, char data) {
    struct Node *new_node = new Node(data);
    struct Node *last = *headRef;

    if (*headRef == NULL) {
        *headRef = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}


// } Driver Code Ends

/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to rearrange the linked list based on vowels
    struct Node *arrangeCV(Node *head) {
        
        vector<char> vowels;
        vector<char> consonants;
        
        Node *curr = head;
        while(curr) {
            if(curr->data == 'a' or curr->data == 'e' or curr->data == 'i' or curr->data == 'o' or curr->data == 'u') {
                vowels.push_back(curr->data);
            }
            else {
                consonants.push_back(curr->data);
            }
            curr = curr->next;
        }
        
        Node *realhead = nullptr;
        if(vowels.size() > 0)
        realhead = new Node(vowels[0]);
        
        head = nullptr;
        bool check = false;
        if(realhead == nullptr) {
            realhead = new Node(0);
            head = realhead;
            check = true;
        }
        else {
            head = realhead;
        }
        for(int i=1; i<vowels.size(); i++) {
            Node *temp = new Node(vowels[i]);
            head->next = temp;
            head = head->next;
        }
        for(int i=0; i<consonants.size(); i++) {
            Node *temp = new Node(consonants[i]);
            head->next = temp;
            head = head->next;
        }
        head->next = nullptr;
        
        if(check)
        return realhead->next;
        else 
        return realhead;
        
    }
};



//{ Driver Code Starts.

// task is to complete this function
int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<char> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        char number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            return NULL;
        }
        char val = arr[0];
        int size = arr.size();

        Node *head = new Node(val);
        Node *tail = head;

        for (int i = 1; i < size; i++) {
            val = arr[i];
            tail->next = new Node(val);
            tail = tail->next;
        }

        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends