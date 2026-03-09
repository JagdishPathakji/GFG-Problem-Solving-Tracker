// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        
        sort(arr.begin(),arr.end(), greater<>());
        return arr[0] * arr[1];
    }
};