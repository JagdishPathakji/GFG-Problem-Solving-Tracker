//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here.
        int start = -1;
        int end = -1;
        
        bool check = true;
        for(int i=0; i<arr.size(); i++) {
            if(check and arr[i] == key) {
                start = i;
                end = i;
                check = false;
            }
            else if(arr[i] == key and !check) {
                end = i;
            }
        }
        
        return {start,end};
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> res;
        vector<int> arr;
        string s;
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int key;
        cin >> key;
        cin.ignore();
        Solution ob;
        res = ob.findIndex(arr, key);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << "\n";
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends