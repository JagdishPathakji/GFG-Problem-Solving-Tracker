//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Definition of the Node class
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

// Function to print the tree in postorder traversal
void printPostOrder(Node *root) {
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}


// } Driver Code Ends
// Class that contains the logic to build the binary tree
/*
Definition of the Node class
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    
    int find(vector<int> &in, int find, int start, int end) {
        
        for(int i=start; i<=end; i++) {
            if(in[i] == find) {
                return i;
            }
        }
        
        return -1;
    }
    
    // Function to build the tree from given inorder and preorder traversals
    Node *MakeTree(vector<int> &in, vector<int> &pre, int InStart, int InEnd, int Index) {
        
        if(InStart > InEnd) 
        return nullptr;
        
        Node *root = new Node(pre[Index]);
        int pos = find(in,pre[Index],InStart, InEnd);
        
        root->left = MakeTree(in,pre,InStart,pos-1,Index+1);
        root->right = MakeTree(in,pre,pos+1,InEnd,Index+(pos-InStart+1));
        
        return root;
    }
    
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        
        Node *root = MakeTree(inorder,preorder,0,inorder.size()-1,0);
        
        return root;
        
    }
};

//{ Driver Code Starts.

// Main function where the test cases are handled
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> inorder, preorder;

        // Input the inorder traversal
        string input;
        getline(cin, input);
        stringstream ss1(input);
        int num;
        while (ss1 >> num)
            inorder.push_back(num);

        // Input the preorder traversal
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> num)
            preorder.push_back(num);

        // Create Solution object and build the tree
        Solution obj;
        Node *root = obj.buildTree(inorder, preorder);

        // Print the postorder traversal of the constructed tree
        printPostOrder(root);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends