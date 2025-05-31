// Function to print the k numbers with most occurrences

class Solution {
  public:
    // Function to return the sum of frequencies of k numbers
    // with most occurrences in an array.
    int kMostFrequent(vector<int>& arr, int k) {
        // Your code here
        map<int,int> mp;
        
        for(int i=0; i<arr.size(); i++) {
            mp[arr[i]]++;
        }
        
        
        // Move frequencies into a vector for sorting
        vector<pair<int,int>> freqVec(mp.begin(), mp.end());
    
        // Sort descending by frequency
        sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        
        int count = 0;
        for(int i  = 0; i<freqVec.size() and i<k; i++) {
            count += freqVec[i].second;
        }
        
        return count;
    }
};