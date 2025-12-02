// User function Template for C++

class Solution {
  public:
  
    int GCD(int a, int b) {
        
        if(b == 0)
        return a;
        
        return GCD(b,a%b);
    }
    
    int maxBinTreeGCD(vector<vector<int>> &arr, int N) {
        
        sort(arr.begin(),arr.end());
        
        
        if(arr.size() <= 1)
        return 0;
        
        int ans = 0;
        int first = arr[0][0];
        int second = arr[0][1];
            
        int currf,currs;
        for(int i=1; i<arr.size(); i++) {
            currf = arr[i][0];
            currs = arr[i][1];
            
            if(currf == first) {
                if(second > currs) {
                    ans = max(ans,GCD(second,currs));
                }
                else {
                    ans = max(ans,GCD(currs,second));
                }
            }
            
            first = currf;
            second = currs;
        }
        
        
        return ans;
    }
};