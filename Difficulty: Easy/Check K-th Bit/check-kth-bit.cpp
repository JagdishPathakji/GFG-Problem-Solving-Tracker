class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int ans = (n >> k ) & 1;
    
        if(ans == 1)
        return true;
        else
        return false;
    }
};