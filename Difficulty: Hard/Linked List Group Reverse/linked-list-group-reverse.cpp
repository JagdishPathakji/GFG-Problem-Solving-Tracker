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
    Node *reverseKGroup(Node *head, int k) {
        
        
        if(!head || k == 1) return head;
        
        vector<pair<Node*,Node*>> pairs;
        int temp = k;
        Node *curr = head;
        
        Node *first = nullptr, *second = nullptr;
        Node *prev = nullptr;
        
        while(curr) {
            
            first = curr;
            int count = 1;
            
            Node *prev = curr;
            while(count < k && curr) {
                prev = curr;
                curr = curr->next;
                count++;
            }
            
            if(count == k && curr) {
                second = curr;
            }
            else if(count == k && !curr) {
                second = prev;
            }
            else if(!curr) {
                second = prev;
            }
            
            pairs.push_back({first,second});
            if(curr)
            curr = curr->next;
        }
        
        // edge case
        if(pairs.size() == 0) return head;
        
        // vector is ready ??
        // now reverse the individual node pairs
        for(int i=0; i<pairs.size(); i++) {
            
            Node *start = pairs[i].first;
            Node *end = pairs[i].second;
            
            end->next = nullptr;
            
            Node *tp = start;
            Node *prev = nullptr;
            while(tp) {
                Node *nxt = tp->next;
                tp->next = prev;
                prev = tp;
                tp = nxt;
            }
            
        }
        
        // connect the pairs
        for(int i=0; i<pairs.size()-1; i++) {
            pairs[i].first->next = pairs[i+1].second;
        }
        
        // return head
        return pairs[0].second;
    }
};