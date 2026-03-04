// User function template for C++

class Solution {
  public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
        
        vector<int> temp;
        for(int i=0; i<n; i++) {
            temp.push_back(arr1[i]);
            temp.push_back(arr2[i]);
        }
        
        sort(temp.begin(),temp.end(), greater<int>());
        
        unordered_set<int> taken;
        for(int i=0; i<temp.size() && taken.size() < n; i++) {
            taken.insert(temp[i]);
        }
        
        vector<int> ans;
        for(int i=0; i<n; i++) {
            if(taken.count(arr2[i])) {
                ans.push_back(arr2[i]);
                taken.erase(arr2[i]);
            }
        }
        
        for(int i=0; i<n; i++) {
            if(taken.count(arr1[i])) {
                ans.push_back(arr1[i]);
                taken.erase(arr1[i]);
            }
        }
        
        return ans;
    }
};