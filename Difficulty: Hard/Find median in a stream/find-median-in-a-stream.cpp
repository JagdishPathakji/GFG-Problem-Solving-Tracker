//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        
        priority_queue<double> maxheap;
        priority_queue<double, vector<double>, greater<double>> minheap;
        
        vector<double> ans;
        for(int i=0; i<arr.size(); i++) {
            
            // pushing into the heaps
            if(maxheap.empty()) {
                maxheap.push(arr[i]);
            }
            else if(maxheap.top() >= arr[i]) {
                maxheap.push(arr[i]);
            }
            else {
                minheap.push(arr[i]);
            }
            
            
            // balancing the heaps
            if(maxheap.size() > minheap.size() + 1) {
                minheap.push(maxheap.top());
                maxheap.pop();
            }
            else if(minheap.size() > maxheap.size()) {
                maxheap.push(minheap.top());
                minheap.pop(); 
            }
            
            // get median
            if(maxheap.size() > minheap.size()) {
                ans.push_back(maxheap.top());     
            }
            else {
                double temp = maxheap.top()+minheap.top();
                temp /= 2;
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends