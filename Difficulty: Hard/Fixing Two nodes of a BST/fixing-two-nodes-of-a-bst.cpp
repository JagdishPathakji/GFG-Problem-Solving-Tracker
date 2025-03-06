//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));

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
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

bool isBST(Node* n, int lower, int upper) {
    if (!n)
        return true;
    if (n->data <= lower || n->data >= upper)
        return false;
    return (isBST(n->left, lower, n->data) && isBST(n->right, n->data, upper));
}

bool compare(Node* a, Node* b, vector<pair<int, int>>& mismatch) {
    if (!a && !b)
        return true;
    if (!a || !b)
        return false;

    if (a->data != b->data)
        mismatch.push_back(pair<int, int>(a->data, b->data));

    return (compare(a->left, b->left, mismatch) &&
            compare(a->right, b->right, mismatch));
}


// } Driver Code Ends

/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    
    
    void find(Node *root, Node *&gadbad1, Node *&gadbad2, int &prev, bool &first, Node *&prevnode) {
        
        if(!root) return;
        
        find(root->left,gadbad1,gadbad2,prev,first,prevnode);
        if(prev != INT_MIN) {
            if(prev > root->data) {
                if(first) {
                    gadbad1 = prevnode;
                    first = false;
                }
                // making the gadbad2 change to handle both cases : (only one gadbad obtained (occurs if two adjacent nodes are swapped by mistake) || two gadbad obtained)
                gadbad2 = root;
            }
        }
        
        prev = root->data;
        prevnode = root;
        
        find(root->right,gadbad1,gadbad2,prev,first,prevnode);
        
    }
    
    
    void correctBST(Node* root) {
        
        // find two nodes where there is miskate
        /* 
        O(n) time and O(n) space solution : 
        */
        Node *gadbad1 = nullptr,*gadbad2 = nullptr;
        
        bool first = true;
        int prev = INT_MIN;
        Node *prevnode = nullptr;
        
        find(root,gadbad1,gadbad2,prev,first,prevnode);
        
        if(gadbad1 and gadbad2) {
            swap(gadbad1->data,gadbad2->data);
        }   
        
        /*
        Approach : 
        
        Consider that we have retrived the inorder traversal of the given tree
        in an vector and then swapped the two indexes which are at wrong place.
        
        Same thing i have done using recursion (which saves the space of using the vector).
        For finding the two wrongly placed values, we will traverse the vector and easily 
        we can find which two values are swapped
        
        There are two case possible : 
        1. Gadbad obtained only one time in inorder array : 
        -> In that case we have to swap the adjacent two values
        2. Gadbad obtained two time in inorder array : 
        -> 1. The first index of 1st gadbad and second index of 2nd gadbad needs 
        to be exchanged in such case
        
        This same logic is being applied in the recursion which saves the O(n) space occupied by the vector
        
        */
        
        /* O(n) time and O(1) space solution : */
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    getchar();

    while (t--) {
        string s;
        getline(cin, s);

        Node* root = buildTree(s);
        Node* duplicate = buildTree(s);

        Solution ob;
        ob.correctBST(root);

        // check 1: is tree now a BST
        if (!isBST(root, INT_MIN, INT_MAX)) {
            cout << "0\n";
            continue;
        }

        // check 2: comparing with duplicate tree

        vector<pair<int, int>> mismatch;
        // a vector to store data of mismatching nodes

        if (!compare(root, duplicate, mismatch)) {
            // false output from this function indicates change in structure of tree
            cout << "0\n";
            continue;
        }

        // finally, analysing the mismatching nodes
        if (mismatch.size() != 2 || mismatch[0].first != mismatch[1].second ||
            mismatch[0].second != mismatch[1].first)
            cout << "0\n";
        else
            cout << "1\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends