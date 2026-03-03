// User function Template for C++

class Solution {
  public:
    int zeroSumSubmat(vector<vector<int>>& mat) {
        
        int maxArea = 0;
        int n = mat.size();
        
        for(int i=0; i<n; i++) {
            
            vector<int> temp(n,0);
            
            for(int j=i; j<n; j++) {
                
                for(int k=0; k<n; k++) {
                    temp[k] += mat[k][j];
                }
                
                unordered_map<int,int> mp;
                mp[0] = -1;
                int sum = 0;
                
                for(int l=0; l<n; l++) {
                    
                    sum += temp[l];
                    
                    if(mp.find(sum) != mp.end()) {
                        int height = l-mp[sum];
                        int width = j - i + 1;
                        int area = height * width;
                        
                        maxArea = max(maxArea,area);
                        
                    }
                    else {
                        mp[sum] = l;
                    }
                }
            }
        }
        
        return maxArea;
    }
};
