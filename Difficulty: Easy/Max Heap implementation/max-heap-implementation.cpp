class maxHeap {
  private:
    // Initialize your data members

  public:

    priority_queue<int> pq;
    void push(int x) {
        pq.push(x);
    }

    void pop() {
        pq.pop();
    }

    int peek() {
        if(pq.size() == 0)
        return -1;
        
        return pq.top();
    }

    int size() {
        return pq.size();
    }
};