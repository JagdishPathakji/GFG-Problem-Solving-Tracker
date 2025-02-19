//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        // code here
        int count = 0;
        int ans = 1;
        int temp = INT_MAX;
        for(int i=0; i<mat.size(); i++) {
            count = 0;
            for(int j=0; j<mat[0].size(); j++) {
                if(mat[i][j] == 1) {
                    count++;
                }
            }
            if(temp > count) {
                ans = i+1;
                temp = count;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> mat(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(mat) << "\n";
        cout << "~\n";
    }
}
// } Driver Code Ends