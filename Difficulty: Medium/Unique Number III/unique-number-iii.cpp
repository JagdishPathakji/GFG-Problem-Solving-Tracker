// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        
        int ans = 0;
        
        for(int i=0; i<32; i++) {
            int count1s = 0;
            for(int j=0; j<arr.size(); j++) {
                int num = arr[j] >> i;
                num = num & 1;
                if(num == 1) {
                    count1s++;
                }
            }
            
            if(count1s%3 == 1) {
                ans = (ans) | (1 << i);
            }
        }
        
        return ans;
    }
};