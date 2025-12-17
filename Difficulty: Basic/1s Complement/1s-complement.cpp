
class Solution {
  public:
    string onesComplement(string S, int N) {
        
        for(int i=0; i<S.size(); i++) {
            if(S[i] == '0')
            S[i] = '1';
            else
            S[i] = '0';
        }
        
        return S;
    }
};