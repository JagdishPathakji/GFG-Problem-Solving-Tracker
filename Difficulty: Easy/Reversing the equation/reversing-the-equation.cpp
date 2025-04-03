//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s) {
    
        string ans = "";
        
        for(int i=s.size()-1; i>=0; i--) {
            
            if(isdigit(s[i])) {
                string num = "";
                while( i >= 0 and isdigit(s[i])) {
                    num = s[i] + num;
                    i--;
                }
                i++;
                ans += num;
            }
            else {
                ans += s[i];
            }
                
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends