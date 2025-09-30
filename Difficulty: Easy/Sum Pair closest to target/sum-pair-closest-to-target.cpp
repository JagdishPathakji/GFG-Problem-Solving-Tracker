class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        
        sort(arr.begin(),arr.end());
        
        int start = 0;
        int end = arr.size()-1;
        
        int first = -1;
        int second = -1;
        
        int near = INT_MAX;
        int absd = INT_MAX;
        
        
        int difference;
        int neartotarget;
        while(start < end) {
            
            difference = arr[end]-arr[start];
            neartotarget = (arr[start]+arr[end]-target);
            
            if(abs(neartotarget) < abs(near)) {
                first = arr[start];
                second = arr[end];
                
                near = neartotarget;
                absd = difference;
                
               
            }
            else if(abs(neartotarget) == abs(near)) {
                
                if(abs(difference) > abs(absd)) {
                    first = arr[start];
                    second = arr[end];
                    
                    difference = absd;
                    near = neartotarget;
                }
                
               
            }
            
            if(neartotarget < 0) {
                start = start + 1;
            }
            else {
                end = end - 1;
            }
        }
        
        if(first == -1 && second == -1)
        return {};
        
        return {first,second};
    }
};