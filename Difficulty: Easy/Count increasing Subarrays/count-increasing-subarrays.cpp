class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        
        int count = 0;
        
        int i = 0;
        while(i < arr.size()) {
            int j = i+1;
            while(arr[j] > arr[j-1] && j < arr.size()) {
                j++;
            }
            j--;
            int n = j-i+1;
            count += (n*(n-1))/2;
            i = j+1;
        }
        
        return count;
    }
};
