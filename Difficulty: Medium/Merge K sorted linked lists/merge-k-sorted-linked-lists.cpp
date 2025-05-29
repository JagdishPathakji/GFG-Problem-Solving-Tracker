/*Linked list Node structure

struct Node
{
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
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<arr.size(); i++) {
            Node *head = arr[i];
            while(head) {
                pq.push(head->data);
                head = head->next;
            }
        }
        
        Node *head = new Node(0);
        Node *realhead = head;
        while(!pq.empty()) {
            Node *newnode = new Node(pq.top());
            pq.pop();
            head->next = newnode;
            head = head->next;
        }
        
        return realhead->next;
        
    }
};