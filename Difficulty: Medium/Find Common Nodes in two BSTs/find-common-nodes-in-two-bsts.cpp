//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
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


// } Driver Code Ends



class Solution {
  public:
    
    vector<int> findCommon(Node *r1, Node *r2) {
        
        stack<Node*> s1, s2;
        vector<int> ans;
    
        while (true) {
            // Push all left nodes of r1 and r2
            while (r1) {
                s1.push(r1);
                r1 = r1->left;
            }
            while (r2) {
                s2.push(r2);
                r2 = r2->left;
            }
    
            // If either stack is empty, break
            if (s1.empty() || s2.empty()) break;
    
            r1 = s1.top();
            r2 = s2.top();
    
            if (r1->data == r2->data) {
                ans.push_back(r1->data);
                s1.pop();
                s2.pop();
                r1 = r1->right;
                r2 = r2->right;
            }
            else if (r1->data < r2->data) {
                s1.pop();
                r1 = r1->right;
                r2 = nullptr; // Don't move r2
            }
            else {
                s2.pop();
                r2 = r2->right;
                r1 = nullptr; // Don't move r1
            }
        }
        return ans;

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
        Node* root1 = buildTree(s);

        getline(cin, s);
        Node* root2 = buildTree(s);
        Solution ob;
        vector<int> res = ob.findCommon(root1, root2);
        for (int i : res)
            cout << i << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 1;
}
// } Driver Code Ends