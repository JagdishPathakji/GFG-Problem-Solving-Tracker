
class Solution {
  public:
    // Function to find the maximum number of distinct elements after removing k
    // elements.
    int maxDistinctNum(vector<int> arr, int k) {
        
        unordered_map<int,int> mp;
        for(int i=0; i<arr.size(); i++) 
        mp[arr[i]]++;
        
        priority_queue<pair<int,int>> pq;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            pq.push({it->second,it->first});
        }
        
        while(!pq.empty() && k--) {
            
            pair<int,int> temp = pq.top();
            if(temp.first > 1) {
                pq.pop();
                pq.push({temp.first-1,temp.second});
            }
            else {
                pq.pop();
            }
        }
        
        return pq.size();
    }
};