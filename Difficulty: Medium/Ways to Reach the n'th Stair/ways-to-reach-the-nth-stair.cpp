class Solution {
  public:
  
    int countWays(int n) {
        
        if(n <= 2)
        return n;
        
        int first = 1;
        int second = 2;
        int third;
        
        for(int i=2; i<n; i++) {
            third = first + second;
            first = second;
            second = third;
        }
        
        return third;
    }
};
