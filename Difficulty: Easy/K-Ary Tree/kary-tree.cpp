// User function Template for C++

class Solution {
  public:
    
    long long MOD = 1e9 + 7;
    
    long long karyTree(int k, int m) {
        
        long long res = 1;
    
        while (m) {
            if (m % 2) res = (res * k) % MOD;
            k = (1LL * k * k) % MOD;
            m /= 2;
        }
        
        return res;
    }
};