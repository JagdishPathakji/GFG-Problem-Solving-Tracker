// User function template for C++
class Solution {
  public:
    
    bool allfreqzero(vector<int> &freq) {
        for(int i=0; i<freq.size(); i++) {
            if(freq[i] != 0)
            return false;
        }
        
        return true;
    }
  
    int search(string &pat, string &txt) {
        
        int windowsize = pat.size();
        int n = txt.size();
        vector<int> freq(26,0);
        for(int i=0; i<pat.size(); i++) {
            freq[pat[i]-'a']++;
        }
        
        int i = 0;
        int j = 0;
        int result = 0;
        
        while(j < n) {
            
            freq[txt[j]-'a']--;
            
            if(j-i+1 == windowsize) {
                if(allfreqzero(freq))
                result++;
                
                freq[txt[i]-'a']++;
                i++;
            }
            
            j++;
        }
        
        return result;
    }
};