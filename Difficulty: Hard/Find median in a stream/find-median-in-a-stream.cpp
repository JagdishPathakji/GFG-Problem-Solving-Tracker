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
            
            // inserting element to the heap
            if(maxheap.size() == 0) {
                maxheap.push(arr[i]);
            }
            else if(arr[i] <= maxheap.top()) {
                maxheap.push(arr[i]);
            }
            else {
                minheap.push(arr[i]);
            }
            
            // balancing the heap
            if(maxheap.size()-1 > minheap.size()) {
                minheap.push(maxheap.top());
                maxheap.pop();
            }
            else if(minheap.size()-1 == maxheap.size()) {
                maxheap.push(minheap.top());
                minheap.pop();
            }
            
            // finding the median
            if(maxheap.size() > minheap.size()) 
            ans.push_back(maxheap.top());
            else
            ans.push_back((maxheap.top()+minheap.top())/2);
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