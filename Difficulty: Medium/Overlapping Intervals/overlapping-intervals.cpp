class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        
        ans.push_back(arr[0]);
        for(int i=1; i<arr.size(); i++) {
            
            int news = arr[i][0];
            int newe = arr[i][1];
            
            if(news >= ans.back()[0]  && news <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1],newe);
            }
            else {
                ans.push_back(arr[i]);
            }
        }
        
        return ans;
    }
};