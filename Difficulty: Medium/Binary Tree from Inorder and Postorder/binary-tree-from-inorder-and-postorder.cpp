//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL)
        return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
0};*/

class Solution {
  public:

    int find(vector<int> &inorder, int find, int start, int end) {
        
        for(int i=start; i<=end; i++) {
            if(inorder[i] == find) {
                return i;
            }
        }
        
        return -1;
    }

    // Function to return a tree created from postorder and inoreder traversals.
    Node *MakeTree(vector<int> &inorder, vector<int> &postorder, int InStart, int InEnd, int Index) {
        
        if(InStart > InEnd) 
        return nullptr;
        
        Node *root = new Node(postorder[Index]);
        int pos = find(inorder,postorder[Index],InStart,InEnd);
        
        root->right = MakeTree(inorder,postorder,pos+1,InEnd,Index-1);
        root->left = MakeTree(inorder,postorder,InStart,pos-1,Index-(InEnd-pos)-1);
        
        return root;
    }
    
    Node* buildTree(vector<int> inorder, vector<int> postorder) {
        // code here
        
        int n = postorder.size();
        Node *root = MakeTree(inorder,postorder,0,n-1,n-1);
        
        return root;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> inorder;
        int number;
        while (ss >> number) {
            inorder.push_back(number);
        }

        getline(cin, input);
        stringstream ss2(input);
        vector<int> postorder;
        while (ss2 >> number) {
            postorder.push_back(number);
        }
        Solution obj;
        Node* root = obj.buildTree(inorder, postorder);
        preOrder(root);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends