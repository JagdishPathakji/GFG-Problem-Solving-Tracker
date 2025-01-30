//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
        
        double ans;
        if(e == 0) {
            return 1.0;
        }
        
        if(e == 1) {
            return b;
        }
        
        bool isnegative = false;
        if(e < 0) {
            e = -e;
            isnegative = true;
        }
        
        double a = power(b,e/2);
        
        if(e%2 == 0) {
            ans = a * a;
        }
        else {
            ans = a * a * b;
        }
        
        if(isnegative) {
            ans = 1 / ans;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends