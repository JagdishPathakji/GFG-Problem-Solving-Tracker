
class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int findways(int pos, int n) {
        
        if(pos == n)
        return 1;
        if(pos > n)
        return 0;
        
        return findways(pos+1,n) + findways(pos+2,n) + findways(pos+3,n);
    }
    
    int countWays(int n) {
        
        return findways(0,n);
    }
};
