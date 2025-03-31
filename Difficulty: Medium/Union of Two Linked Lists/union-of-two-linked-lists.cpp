//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }

    int data = arr[0];
    Node* head = new Node(data);
    Node* tail = head;
    for (int i = 1; i < arr.size(); ++i) {
        data = arr[i];
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends

/*
// structure of the node is as follows

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
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        vector<int> v1;
        vector<int> v2;
        
        while(head1) {
            v1.push_back(head1->data);
            head1 = head1->next;
        }
        
        while(head2) {
            v2.push_back(head2->data);
            head2 = head2->next;
        }
        
        Node *head = new Node(0);
        Node *realhead = head;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        int i=0; 
        int j=0;
        
        while(i < v1.size() and j < v2.size()) {
            
            if(v1[i] < v2[j]) {
                if(head->data != v1[i]) {
                    head->next = new Node(v1[i]);
                    head = head->next;
                }
                i++;
            }
            else if(v1[i] > v2[j]) {
                if(head->data != v2[j]) {
                    head->next = new Node(v2[j]);
                    head = head->next;
                }
                j++;
            }
            else {
                if(head->data != v1[i]) {
                    head->next = new Node(v1[i]);
                    head = head->next;
                }
                i++;
                j++;
            }
        }
        
        while(i < v1.size()) {
            if(head->data != v1[i]) {
                head->next = new Node(v1[i]);
                head = head->next;
            }
            i++;
        }
        
        while(j < v2.size()) {
            if(head->data != v2[j]) {
                head->next = new Node(v2[j]);
                head = head->next;
            }
            j++;
        }
        
        return realhead->next;
   
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        Node* first = buildList();

        Node* second = buildList();
        Solution obj;
        Node* head = obj.makeUnion(first, second);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends