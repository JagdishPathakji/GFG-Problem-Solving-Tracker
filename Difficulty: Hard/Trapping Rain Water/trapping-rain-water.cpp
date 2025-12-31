class Solution {
  public:
    int maxWater(vector<int> &arr) {
        
        int n = arr.size();
        
        vector<int> leftmax(n,0);
        vector<int> rightmax(n,0);
        int ans = 0;
        
        for(int i=1; i<n; i++) {
            leftmax[i] = max(leftmax[i-1],arr[i-1]);
        }
        
        for(int i=n-2; i>=0; i--) {
            rightmax[i] = max(rightmax[i+1],arr[i+1]);
        }

        for(int i=0; i<n; i++) {
            if(leftmax[i] == 0 || rightmax[i] == 0 || arr[i] > leftmax[i] || arr[i] > rightmax[i]) {
                continue;
            }
            ans += min(leftmax[i],rightmax[i])-arr[i];
        }
        
        return ans;
    }
};