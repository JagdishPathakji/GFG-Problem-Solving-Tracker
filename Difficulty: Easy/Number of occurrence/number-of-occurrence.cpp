class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        
        int c = 0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == target)
            c++;
        }
        
        return c;
    }
};
