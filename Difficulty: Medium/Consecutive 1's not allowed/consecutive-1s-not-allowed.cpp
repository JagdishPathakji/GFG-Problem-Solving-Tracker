class Solution {
  public:
    int countStrings(int n) {
        
        // direct formula
        // fibo(n)
        int first = 1;
        int second = 2;
        
        if(n == 0)
        return first;
        
        if(n == 1)
        return second;
        
        int third;
        
        for(int i=2; i<=n; i++) {
            third = first + second;
            first = second;
            second = third;
        }
        
        
        return third;
    }
};