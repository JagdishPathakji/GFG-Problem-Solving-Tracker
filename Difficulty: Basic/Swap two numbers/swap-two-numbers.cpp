class Solution {
  public:
    pair<int, int> get(int a, int b) {
        // code here
        int x = a ^ b;
        a = x ^ a;
        b = x ^ b;
        
        return {a,b};
    }
};