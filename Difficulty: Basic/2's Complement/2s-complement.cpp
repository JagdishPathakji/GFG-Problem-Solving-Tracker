// User function Template for C++

class Solution {
  public:
    string complement(string bi) {
        
        int count = 0;
        for(int i=bi.size()-1; i>=0; i--) {
            
            if(count == 0 && bi[i] == '1') {
                count++;
            }
            else if(count == 1) {
                if(bi[i] == '1')
                bi[i] = '0';
                else
                bi[i] = '1';
            }
        }
        
        return bi;
    }
};