class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node* l, Node* r) : val(x), left(l), right(r) {}
};

class Compare {
public:
    bool operator()(Node* a, Node* b) const {
        return a->val  > b->val; 
    }
};

class Solution {
public:
    void pre(Node* root, string s,vector<string> &ans) {
        if(!root->left && !root->right) {
            ans.push_back(s);
            return;
        }
        if(root->left) pre(root->left, s + '0',ans);
     
        if(root->right) pre(root->right, s + '1',ans);
    }

    vector<string> huffmanCodes(string S, vector<int> f, int N) {
    
        vector<string> ans;
        priority_queue<Node*, vector<Node*>, Compare> pq;

        for(int i = 0; i < N; i++) {
           
            pq.push(new Node(f[i]));
        }

        while(pq.size() > 1) {
            Node* left = pq.top(); pq.pop();
            Node* right = pq.top(); pq.pop();
            int sumFreq = left->val + right->val;
            Node* parent = new Node(sumFreq, left, right);
            pq.push(parent);
        }

        Node* root = pq.top();
        pre(root, "",ans);
        return ans;
    }
};