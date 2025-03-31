//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *createNewNode(int value) {
    Node *temp = new Node;
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

Node *newNode(Node *root, int data) {
    if (root == NULL)
        root = createNewNode(data);
    else if (data < root->data)
        root->left = newNode(root->left, data);
    else
        root->right = newNode(root->right, data);
    return root;
}


// } Driver Code Ends

// User function Template for C++

// Function to return the level order traversal of a BST.
vector<int> levelOrder(struct Node* node) {
    // code here
        queue<Node*> q;
        q.push(node);
        
        vector<int> ans;
        
        while(!q.empty()) {
            int k = q.size();
            while(k--) {
                Node *temp = q.front();
                q.pop();
                
                ans.push_back(temp->data);
                
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
                
            }
        }
        
    return ans;
}


//{ Driver Code Starts.

int main() {

    int testcases;
    cin >> testcases;
    while (testcases--) {
        Node *root = NULL;
        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];

        for (int i = 0; i < sizeOfArray; i++) cin >> arr[i];

        for (int i = 0; i < sizeOfArray; i++) {
            root = newNode(root, arr[i]);
        }

        vector<int> res = levelOrder(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends