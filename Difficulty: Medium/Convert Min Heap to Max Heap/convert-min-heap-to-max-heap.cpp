// User function Template for C++

class Solution {
  public:
    
    void heapify(int index, vector<int> &arr, int n) {
        
        while(true) {
            
            int largest = index;
            int left = index * 2 + 1;
            int right = index * 2 + 2;
            
            if(left < n and arr[left] > arr[largest])
            largest = left;
            if(right < n and arr[right] > arr[largest])
            largest = right;
            
            if(index == largest)
            break;
            
            swap(arr[index],arr[largest]);
            index = largest;
        }
    }
    
    void BuildMaxHeap(vector<int> &arr) {
        // using the step down approach
        for(int i=(arr.size()/2-1); i>=0; i--) {
            heapify(i,arr,arr.size());
        }
    }
  
    void convertMinToMaxHeap(vector<int> &arr, int N) {
        
        BuildMaxHeap(arr);
        
    }
};
