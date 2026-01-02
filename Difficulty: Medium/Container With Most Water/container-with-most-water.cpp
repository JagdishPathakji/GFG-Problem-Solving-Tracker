class Solution {
  public:
    int maxWater(vector<int> &arr) {
        
        int i = 0;
        int n = arr.size();
        int j = n-1;
        
        int maxi = 0;
        while(i < j) {
            
            int area = min(arr[i],arr[j])*(j-i);
            maxi = max(area,maxi);
            
            if(arr[i] < arr[j])
            i++;
            else
            j--;
        }
        
        return maxi;
    }
};