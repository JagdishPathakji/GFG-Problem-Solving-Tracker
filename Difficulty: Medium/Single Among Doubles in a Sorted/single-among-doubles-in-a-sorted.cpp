//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findOnce(vector<int>& arr) {
        // code here.
        int start = 0;
        int end = arr.size()-1;
        
        if(arr[arr.size()-1] != arr[arr.size()-2]) {
            return arr[arr.size()-1];
        }
        
        if(arr[0] != arr[1]) {
            return arr[0];
        }
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            
            if(arr[mid] != arr[mid-1] and arr[mid] != arr[mid+1]) {
                return arr[mid];
            }
            else if(arr[mid] != arr[mid+1]) {
                if(mid%2 == 0) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }
            else if(arr[mid] != arr[mid-1]) {
                if(mid%2 == 0) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
            
        }
        
        return 0;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int ans = ob.findOnce(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends