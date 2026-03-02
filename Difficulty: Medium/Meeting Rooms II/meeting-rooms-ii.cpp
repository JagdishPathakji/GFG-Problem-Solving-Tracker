class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        
        map<int,int> mp;
        int n = start.size();
        
        for(int i=0; i<n; i++) {
            
            mp[start[i]]++;
            
            mp[end[i]]--;
        }
        
        int count = 0;
        int sum = 0;
        
        for(auto it = mp.begin(); it != mp.end(); it++) {
            
            sum += it->second;
            count = max(count,sum);
            
            if(sum < 0)
            sum = 0;
        }
        
        return count;
    }
};
