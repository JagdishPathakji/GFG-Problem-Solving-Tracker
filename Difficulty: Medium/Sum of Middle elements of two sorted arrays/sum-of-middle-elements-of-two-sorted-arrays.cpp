//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        
        int size = arr1.size() + arr2.size();
        
        int i = 0;
        int j = 0;
        int count = 0;
        
        int mid = 0;
        int mid1 = 0;
        bool flag1 = false;
        bool flag2 = false;
        
        while(i < arr1.size() and j < arr2.size()) {
            if(arr1[i] <= arr2[j]) {
                count++;    
                if(count == size/2) {
                    flag1 = true;
                    mid1 = arr1[i];
                }
                else if(count == size/2 + 1){
                    flag2 = true;
                    mid = arr1[i];
                }
                i++;
            }
            else {
                count++;
                if(count == size/2) {
                    flag1 = true;
                    mid1 = arr2[j];
                }
                else if(count == size/2 + 1) {
                    flag2 = true;
                    mid = arr2[j];
                }
                j++;
            }
            
            if(flag1 and flag2) {
                break;
            }
            
        }
        
        
        return (mid+mid1);
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl << "~\n";
    }
}
// } Driver Code Ends