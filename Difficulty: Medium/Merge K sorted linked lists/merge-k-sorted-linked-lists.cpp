/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        
        priority_queue<pair<int,Node*>, vector<pair<int,Node*>>, greater<pair<int,Node*>>> pq;
        
        for(int i=0; i<arr.size(); i++) {
            pq.push({arr[i]->data,arr[i]});
        }
        
        
        Node *head = new Node(0);
        Node *curr = head;
        while(!pq.empty()) {
            
            auto peek = pq.top();
            int val = peek.first;
            Node *temp = peek.second;
            
            curr->next = new Node(val);
            curr = curr->next;
            pq.pop();
            
            if(temp->next)
            pq.push({temp->next->data,temp->next});
            
        }
        curr->next = nullptr;
        
        return head->next;
    }
};