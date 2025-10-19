// User function Template for C++
class node {
public:
    
    string url;
    node *prev;
    node *next;
    
    node(string url) {
        this->url = url;
        prev = nullptr;
        next = nullptr;
    }
};


class BrowserHistory {
  public:
  
    node *head = nullptr;
    node *tail = nullptr;
    node *currurl = nullptr;
    BrowserHistory(string homepage) {
        head = new node(homepage);
        tail = head;
        currurl = head;
    }

    // visit current url
    void visit(string url) {
        node *newurl = new node(url);
        currurl->next = newurl;
        newurl->prev = currurl;
        currurl = currurl->next;
        tail = currurl;
    }

    // 'steps' move backward in history and return current page
    string back(int steps) {
        
        while(currurl->prev && steps--)
        currurl = currurl->prev;
        
        return currurl->url;
    }

    // 'steps' move forward and return current page
    string forward(int steps) {
        
        while(currurl->next && steps--)
        currurl = currurl->next;
        
        return currurl->url;
    }
    
};