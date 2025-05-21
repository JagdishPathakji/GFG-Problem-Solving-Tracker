
class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(a > 0 and b > 0) {
            if(a == b) return a;
            if(a > b) a = a % b;
            else if(b > a) b = b % a;
        }
        
        if(a == 0)
        return b;
        else 
        return a;
    }
};
