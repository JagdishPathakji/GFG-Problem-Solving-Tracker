class Solution {
  public:
    string countSort(string s) {
        // code here
        sort(s.begin(),s.end());
        return s;
    }
};