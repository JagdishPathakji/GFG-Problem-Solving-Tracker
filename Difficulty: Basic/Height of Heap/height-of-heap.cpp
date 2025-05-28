// User function Template for C++

class Solution {
  public:
    int heapHeight(int N, int arr[]) {
        // code here
        int count = 0;
        while(N != 1) {
            count++;
            N = N / 2;
        }
        
        return count;
    }
};