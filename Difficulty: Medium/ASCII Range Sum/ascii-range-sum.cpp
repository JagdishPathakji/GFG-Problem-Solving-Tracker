class Solution {
  public:
    vector<int> asciirange(string& s) {
        
        map<char,int> first;
        map<char,int> last;
        
        for(int i=0; i<s.size(); i++) {
            if(first.find(s[i]) == first.end()) {
                first[s[i]] = i;  
            }
        }
        
        for(int i=s.size()-1; i>=0; i--) {
            if(last.find(s[i]) == last.end()) {
                last[s[i]] = i;
            }
        }
        
        vector<int> prefixSum(s.size());
        prefixSum[0] = s[0]-'a'+97;
        for(int i=1; i<s.size(); i++) {
            prefixSum[i] = prefixSum[i-1] + (s[i]-'a'+97);
        }
        
        vector<int> ans;
        for(auto it = first.begin(), it1 = last.begin(); it != first.end() && it1 != last.end(); it++, it1++) {
            if(it->second != it1->second && it1->second-it->second > 1) {
                ans.push_back(prefixSum[it1->second-1]-prefixSum[it->second]);
            }
        }
        
        return ans;
    }
};