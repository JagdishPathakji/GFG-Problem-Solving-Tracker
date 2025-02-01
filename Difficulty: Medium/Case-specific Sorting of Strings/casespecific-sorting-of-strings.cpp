//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n) {
        
        string lowercase;
        string uppercase;
        
        string ans = "";
        
        for(int i=0; i<str.size(); i++) {
            if(str[i] >= 'a' and str[i] <= 'z') {
                lowercase = lowercase + str[i];
            }
            if(str[i] >= 'A' and str[i] <= 'Z') {
                uppercase = uppercase + str[i];
            }
        }    
        
        sort(lowercase.begin(),lowercase.end());
        sort(uppercase.begin(),uppercase.end());
        
        int k = 0;
        int j = 0;
        
        for(int i=0; i<str.size(); i++) {
            if(str[i] >= 'a' and str[i] <= 'z') {
                ans.push_back(lowercase[k]);
                k++;
            }
            else {
                ans.push_back(uppercase[j]);
                j++;
            }
        }
        
        for(int i=0; i<str.size(); i++) {
            if(str[i] >= 'a' and str[i] <= 'z') {
                if(ans[i] >= 'A' and ans[i] <= 'Z') {
                    ans[i] = ans[i] + 32;
                }
            }
            else {
                if(ans[i] >= 'a' and ans[i] <= 'z') {
                    ans[i] = ans[i] - 32;
                }
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	
cout << "~" << "\n";
}
}
// } Driver Code Ends