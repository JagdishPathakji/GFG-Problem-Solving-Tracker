class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int countZeros = 0;
        
        int idx = 0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == 0) {
                countZeros++;
            }
            else {
                arr[idx] = arr[i];
                idx++;
            }
        }
        
        while(idx < arr.size()) {
            arr[idx] = 0;
            idx++;
        }

    }
};