class Solution {
  public:
    bool isEven(int n) {
        
        if((n & 1) == 1)
        return false;
        return true;
    }
};