class Solution {
  public:
    int isPowerOfFour(unsigned int n) {
        
        if(n == 1)
        return true;
        
        int numberofsetbit = (n & (n-1)); // if ans is zero means one set bit
        if(numberofsetbit == 0 && (n-1)%3 == 0)
        return true;
        
        return false;
    }
};