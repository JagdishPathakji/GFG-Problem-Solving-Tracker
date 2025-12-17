class Solution {
  public:
    void bitManipulation(int num, int i) {
        
        int ithbit = ((num >> (i-1)) & 1);
        int setithbit = (num | (1 << (i-1)));
        int clearithbit = (num ^ (ithbit << (i-1)));
        
        cout<<ithbit << " " << setithbit << " " << clearithbit;
        
    }
};