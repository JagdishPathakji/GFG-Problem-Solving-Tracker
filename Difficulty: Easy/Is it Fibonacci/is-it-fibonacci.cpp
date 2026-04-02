// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> arr) {
        // code here
        
        long long sum = 0;
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
        }
        
        int size = arr.size();
        for(int i=0; i<N-size; i++) {
            arr.push_back(sum);
            sum -= arr[i];
            sum += arr.back();
        }
        
        return arr.back();
    }
};
