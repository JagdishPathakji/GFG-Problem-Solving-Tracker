// User function Template for C++

class Solution {
  public:
    
    void heapify(vector<int> &ans, int index) {
        
        while(true) {
            
            int largest = index;
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            
            if(left < ans.size() and ans[left] > ans[largest])
            largest = left;
            if(right < ans.size() and ans[right] > ans[largest])
            largest = right;
            
            if(largest == index)
            break;
            
            swap(ans[index],ans[largest]);
            index = largest;
        }
    }
  
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> ans;
        
        for(int i=0; i<a.size(); i++)
        ans.push_back(a[i]);
        
        for(int i=0; i<b.size(); i++)
        ans.push_back(b[i]);
        
        for(int i=(ans.size()/2-1); i>=0; i--) {
            heapify(ans,i);   
        }
        
        return ans;
    }
};