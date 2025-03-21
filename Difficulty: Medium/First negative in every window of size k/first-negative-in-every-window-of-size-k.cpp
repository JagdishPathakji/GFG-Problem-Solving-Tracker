//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        
        vector<int> v;  


        for(int i=0; i<=arr.size()-k; i++) {
            
            bool check = false;
            
            for(int j=i; j<i+k; j++) {
                if(arr[j] < 0) {
                    v.push_back(arr[j]);
                    check = true;
                    break;
                }
            }
            
            if(check == false)
            v.push_back(0);
        }
        
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends