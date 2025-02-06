//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void print(int n, int count) {
        if(count == n) {
            cout<<count<<" ";
            return;
        }
        
        cout<<count<<" ";
        print(n,count+1);
    }
  
    void printTillN(int n) {
        // Write Your Code here
        print(n,1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        ob.printTillN(N);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends