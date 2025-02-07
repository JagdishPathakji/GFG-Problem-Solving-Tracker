//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &penalty) {
        // code here
        vector<int> v(n+1,0);
        int count = 0;
        
        v[arr[0]]++;
        for(int i=1; i<arr.size(); i++) {
            if(v[arr[i]] > 0) {
                count = count + penalty[arr[i]-1];
            }
            else {
                count = count + 1;
            }
            v[arr[i]]++;
        }
        
        return count;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        
        vector<int> penalty(n);
        Array::input(penalty,n);
        
        Solution obj;
        int res = obj.totalTime(n, arr, penalty);
        
        cout<<res<<endl;
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends