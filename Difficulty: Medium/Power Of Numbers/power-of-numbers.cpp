//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int reverseExponentiation(int n) {
        
        int temp = n;
        int reversedNum = 0;
        while (n != 0) {
            int digit = n % 10;           // Extract the last digit
            reversedNum = reversedNum * 10 + digit;  // Append it to reversedNum
            n /= 10;                      // Remove the last digit from num
        }
            
        return pow(temp,reversedNum);
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T; // test cases

    while (T--) {
        int n;
        cin >> n; // input N

        Solution ob;
        // power of the number to its reverse
        int ans = ob.reverseExponentiation(n);
        cout << ans << endl;
    }

    return 0;
}

// } Driver Code Ends