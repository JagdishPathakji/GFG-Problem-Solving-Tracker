// User function Template for C++

class Solution {
  public:
    string maxSum(string w, char x[], int b[], int n) {
        
        unordered_map<char,int> mp;
        for(int i=0; i<n; i++) {
            mp[x[i]] = b[i];
        }
        
        vector<int> v;
        for(int i=0; i<w.size(); i++) {
            if(mp.find(w[i]) != mp.end()) {
                v.push_back(mp[w[i]]);
            }
            else {
                if(w[i] >= 'a' && w[i] <= 'z') {
                    v.push_back((int)w[i]);
                }
                else if(w[i] >= 'A' && w[i] <= 'Z') {
                    v.push_back((int)w[i]);
                }
            }
        }
        
        int sum = 0;
        int maxi = 0;
        
        int start = 0;
        int ansstart = 0;
        int ansend = 0;
        
        for(int i=0; i<v.size(); i++) {
            
            sum += v[i];
            
            if(maxi < sum) {
                maxi = sum;
                ansstart = start;
                ansend = i;
            }
            
            if(sum < 0) {
                sum = 0;
                start = i + 1;
            }
        }
        
        return w.substr(ansstart,ansend-ansstart+1);
    }
};