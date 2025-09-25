class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        set<int> s;
        
        map<int,bool> mp;
        for(int i=0; i<a.size(); i++)
        mp[a[i]] = true;
        
        for(int i=0; i<b.size(); i++)
        if(mp[b[i]] == true)
        s.insert(b[i]);
        
        vector<int> v(s.begin(),s.end());
        return v;
    }
};