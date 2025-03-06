//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends

/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Box {
    
public:
    bool BST;
    int size;
    int min;
    int max;
    
    Box() {
        BST = 1;
        size = 0;
        min = INT_MAX;
        max = INT_MIN;
    }
};

class Solution{
    public:
    
    Box *find(Node *root, int &Totalsize) {
        
        // If Node doesn't exists
        if(!root) {
            return new Box();
        }
        
        // If Node exists
        Box *lefthead = find(root->left,Totalsize);
        Box *righthead = find(root->right,Totalsize);
        
        // If Node is BST
        if(lefthead->BST and righthead->BST and root->data > lefthead->max and root->data < righthead->min) {
            Box *head = new Box();
            head->size = 1 + lefthead->size + righthead->size;
            head->min = min(root->data,lefthead->min);
            head->max  = max(root->data,righthead->max);
            Totalsize = max(Totalsize,head->size);
            return head;
        }
        // If Node is not BST
        else {
            Box *head = new Box();
            head->BST = 0;
            return head;
        }
    }
    
    int largestBst(Node *root) {
    
        int Totalsize = 0;
        find(root,Totalsize);
        
        return Totalsize;
    }
};


//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.largestBst(root) << endl;
    }
    return 0;
}

// } Driver Code Ends