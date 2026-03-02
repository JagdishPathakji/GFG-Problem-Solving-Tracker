class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        
        // vector<int> arrflat;
        // for(int i=0; i<arr.size(); i++) {
        //     int l = arr[i][0];
        //     int r = arr[i][1];
            
        //     for(int j=l; j<=r; j++)
        //     arrflat.push_back(j);
        // }
        
        // unordered_map<int,int> mp;
        // for(int i=0; i<arrflat.size(); i++) {
        //     mp[arrflat[i]]++;
        // }
        
        // int maxi = 0;
        // for(auto it = mp.begin(); it != mp.end(); it++) {
        //     if(maxi < it->second)
        //     maxi = it->second;
        // }
        
        // return maxi;\
        
        
        
        map<int,int> mp;
        for(int i=0; i<arr.size(); i++) {
            
            int entry = arr[i][0];
            int exit = arr[i][1]+1;
            
            mp[entry]++;
            mp[exit]--;
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
