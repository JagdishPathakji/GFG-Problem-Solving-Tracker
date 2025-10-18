class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        
        int i = 0;
        int j = 0;
        
        int windowsize = 0;
        
        bool found = false;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == 1)
            found = true;
        }
        
        if(found == false)
        return k < arr.size() ? k : arr.size();
        
        while(j < arr.size()) {
            
            if(arr[j] == 0) {
                k--;
                
                while(k < 0) {
                    if(arr[i] == 0)
                    k++;
                    
                    i++;
                }
            }
            
            windowsize = max(windowsize,j-i+1);
            j++;
            
        }
        
        return windowsize;
    }
};
