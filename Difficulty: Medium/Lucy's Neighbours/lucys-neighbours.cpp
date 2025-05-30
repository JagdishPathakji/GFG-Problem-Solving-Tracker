// User function Template for C++

class Solution {
  public:
    vector<int> Kclosest(vector<int> arr, int n, int x, int k) {
        
        vector<pair<int,int>> temp;
        for(int i=0; i<arr.size(); i++) {
            temp.push_back({abs(arr[i]-x),arr[i]});
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq(temp.begin(),temp.end());
            
        vector<int> ans;
        while(!pq.empty() and k--) {
            if(k < 0)
            return ans;
            
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};