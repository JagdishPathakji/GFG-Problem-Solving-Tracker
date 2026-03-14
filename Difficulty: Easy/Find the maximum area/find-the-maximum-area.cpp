class Solution {
  public:
    int maxArea(vector<int>& arr) {

        int maxi = *max_element(arr.begin(),arr.end());
        return maxi * maxi;
    }
};