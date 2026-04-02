class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        
        int maxi = 0;
    
        int Xor = 0;
        for(int i=0; i<k; i++) {
            Xor = Xor ^ arr[i]; 
        }
        
        int idx = 0;
        for(int i=k; i<arr.size(); i++) {
            maxi = max(maxi,Xor);
            Xor = Xor ^ arr[idx++];
            Xor = Xor ^ arr[i];
        }
        
        maxi = max(maxi,Xor);
        return maxi;
    }
};