class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        
    
        map<int,int> mp;    
        for(int i=0; i<arr.size(); i++) {
            
            int starthr = arr[i] / 100;
            int x = arr[i] - starthr * 100;
            int y = x + starthr * 60;
            
            
            
            int endhr = dep[i] / 100;
            int x1 = dep[i] - endhr * 100;
            int y1 = x1 + endhr * 60;
            
            mp[y]++;
            mp[y1+1]--;
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
