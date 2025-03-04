//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Node {
    
public:
    Node *left,*right;
    int val;
    
    Node(int v) {
        left = right = nullptr;
        val = v;
    }
};

class Solution {
  public:
    
    Node* makeBST(int *preorder, int MIN, int MAX, int &index, int &count, int N) {

        if(index >= N) return nullptr;

        if(preorder[index] < MIN || preorder[index] > MAX) return nullptr;
        
        Node *root = new Node(preorder[index]);
        count++;
        
        index++;

        root->left = makeBST(preorder,MIN,root->val,index,count,N);
        root->right = makeBST(preorder,root->val,MAX,index,count,N);
        
        return root;
    }
    
    
    int canRepresentBST(int arr[], int N) {
        
        int index = 0;
        int count = 0;
        Node *root = makeBST(arr,INT_MIN,INT_MAX,index,count,N);
        
        return (count == N);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends