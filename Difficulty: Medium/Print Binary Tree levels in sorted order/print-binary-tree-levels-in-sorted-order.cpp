//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n) {
        
        vector<vector<int>> ans;
        
        int count = 1;
        int j=0;
        for(int i=0; i<n; i++) {
            ans.push_back(vector<int> ());
            int loop = count;
            while(loop-- and i<n) {
                ans[j].push_back(arr[i]);
                i++;
            }
            sort(ans[j].begin(),ans[j].end());
            j++;
            i--;
            count = count * 2;
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
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends