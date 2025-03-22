//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int leftElement(vector<int>& arr) {
   
        sort(arr.begin(),arr.end());
        
        int i = 0;
        int j = arr.size()-1;
        int count = 0;
        
        while(i < j) {
            if(count%2 == 0) 
            j--;
            else
            i++;
            
            count++;
        }
        
        return arr[i];
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
        Solution obj;
        int res = obj.leftElement(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends