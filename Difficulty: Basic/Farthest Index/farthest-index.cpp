class Solution {
  public:
    int findIndex(vector<int>& arr, int x) {
    
        int ans = -1;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == x)
            ans = i;
        }
        
        if(ans == -1)
        return -1;
        
        return ans+1;
    }
};