class Solution {
  public:
    void binSort(vector<int> &arr) {
        
        int zeros = 0;
        for(int i=0; i<arr.size(); i++)
        if(arr[i] == 0) zeros++;
    
        int index = 0;
        while(zeros--) {
            arr[index] = 0;
            index++;
        }
        
        while(index < arr.size()) {
            arr[index] = 1;
            index++;
        }
        
    }
};
