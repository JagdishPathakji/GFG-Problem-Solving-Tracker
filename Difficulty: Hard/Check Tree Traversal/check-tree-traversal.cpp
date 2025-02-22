//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//Back-end complete function Template for C++
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
    
    bool isSameTree(Node* p, Node* q) {
        
        // O(n) time and space complexity

        if(!p and !q)
        return true;
        
        if(!p and q)
        return false;
        
        if(p and !q)
        return false;

        if(p->data != q->data)
        return false;
    
        return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);

    }

    int find(int *in, int find, int start, int end) {
        
        for(int i=start; i<=end; i++) {
            if(in[i] == find) {
                return i;
            }
        }
        
        return -1;
    }
    
    // Function to build the tree from given inorder and preorder traversals
    Node *MakeTreePre(int *in, int *pre, int InStart, int InEnd, int Index, bool &check) {
        
        if(InStart > InEnd) 
        return nullptr;
        
        Node *root = new Node(pre[Index]);
        int pos = find(in,pre[Index],InStart, InEnd);
        
        if(pos == -1) {
            check = false;
            return nullptr;
        }    
            
        root->left = MakeTreePre(in,pre,InStart,pos-1,Index+1,check);
        root->right = MakeTreePre(in,pre,pos+1,InEnd,Index+(pos-InStart+1),check);
        
        return root;
    }
    
    Node *MakeTreePost(int *in, int *post, int InStart, int InEnd, int Index, bool &check) {
        
        if(InStart > InEnd) 
        return nullptr;
        
        Node *root = new Node(post[Index]);
        int pos = find(in,post[Index],InStart,InEnd);
        
        if(pos == -1) {
            check = false;
            return nullptr;
        }
            
        root->right = MakeTreePost(in,post,pos+1,InEnd,Index-1,check);
        root->left = MakeTreePost(in,post,InStart,pos-1,Index-(InEnd-pos)-1,check);
        
        return root;
    }
    

class Solution{
    public:
    bool checktree(int preorder[], int inorder[], int postorder[], int N) { 
        
        bool check = true;
        Node *root1 = MakeTreePre(inorder,preorder,0,N-1,0,check);
        
        if(check == false) {
            return check;
        }
        
        Node *root2 = MakeTreePost(inorder,postorder,0,N-1,N-1,check);
        
        if(check == false) {
            return check;
        }
        
        
        return isSameTree(root1,root2);
    } 

};


//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int preorder[n];
		int inorder[n];
		int postorder[n];

		for (int i = 0; i < n; ++i)
			cin>>preorder[i];

		for (int i = 0; i < n; ++i)
			cin>>inorder[i];

		for (int i = 0; i < n; ++i)
			cin>>postorder[i];
        
        Solution obj;
		if(obj.checktree(preorder, inorder, postorder, n))
			cout << "Yes\n";
		else
			cout<<"No\n";
	
cout << "~" << "\n";
} 
	return 0; 
} 


// } Driver Code Ends