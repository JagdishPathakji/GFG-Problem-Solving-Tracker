//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

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
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

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
        if (i >= ip.size())
            break;
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
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    
    void find(Node *root, int pos, int &left, int &right) {

        if(root == nullptr)
        return;

        left = min(left,pos);
        right = max(right,pos);

        find(root->left,pos-1,left,right);
        find(root->right,pos+1,left,right);

    }
    
    vector<int> topView(Node *root) {
        
        
        vector<int> ans;

        int left = 0;
        int right = 0;
        
        find(root,0,left,right);
        
        vector<vector<int>> leftarr(abs(left)+1);
        vector<vector<int>> rightarr(right+1);

        queue<Node *> q;
        q.push(root);
        queue<int> level;
        level.push(0);

        while(!q.empty()) {

            Node *temp = q.front();
            q.pop();
            int pos = level.front();
            level.pop();

            if(pos >= 0) {
                rightarr[pos].push_back(temp->data);
            }
            else {
                leftarr[abs(pos)].push_back(temp->data);
            }

            if(temp->left) {
                q.push(temp->left);
                level.push(pos-1);
            }
            
            if(temp->right) {
                q.push(temp->right);
                level.push(pos+1);
            }
            
        }

        for(int i=leftarr.size()-1; i>=0; i--) {
            if(leftarr[i].size() > 0)
            ans.push_back(leftarr[i][0]);
        }
        
        
        for(int i=0; i<rightarr.size(); i++) {
            if(rightarr[i].size() > 0) 
            ans.push_back(rightarr[i][0]);
        }

        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(256, '\n');
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node* root = buildTree(treeString);
        vector<int> vec = ob.topView(root);
        for (int x : vec)
            cout << x << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends