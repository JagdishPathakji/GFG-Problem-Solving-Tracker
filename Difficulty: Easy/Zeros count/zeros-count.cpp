// User function template for C++

class Solution {
  public:
    int countZeroes(int arr[], int n) {
        
        int count = 0;
        for(int i=n-1; i>=0; i--) {
            if(!arr[i]) count++;
        }
        
        return count;
    }
};