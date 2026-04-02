class Solution {
  public:
    int maxFruits(vector<int>& arr, int totalTime) {
        
        // we want maximum of every totalTime sized window
        int maxiSum = 0;
        int k = min((int)arr.size(),totalTime);
        for(int i=0; i<k; i++) {
            maxiSum += arr[i];
        }
        
        
        
        int sum = maxiSum;
        int idx = 0;
        for(int i=totalTime; i<arr.size(); i++) {
            sum += arr[i];
            sum -= arr[idx++];
            maxiSum = max(sum,maxiSum);
        }
        
        return maxiSum;
        
    }
};
