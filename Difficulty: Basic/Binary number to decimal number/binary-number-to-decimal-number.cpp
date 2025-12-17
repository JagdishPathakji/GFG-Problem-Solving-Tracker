class Solution {
  public:
    int binaryToDecimal(string &b) {
        
        int integer = 0;
        int count = 0;
        for(int i=b.size()-1; i>=0; i--) {
            integer = integer + (b[i]-'0')*(pow(2,count));
            count++;
        }
        
        return integer;
    }
};