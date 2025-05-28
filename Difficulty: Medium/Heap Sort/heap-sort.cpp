// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.

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
    
    void SortArray(vector<int> &arr) {
        
        for(int i=0; i<arr.size(); i++) {
            swap(arr[0],arr[arr.size()-1-i]);
            heapify(0,arr,arr.size()-1-i);
        }
    }

    void heapSort(vector<int>& arr) {
        
        // first build the max-heap and then swap the first and last element and heapify the first index
        BuildMaxHeap(arr);
        SortArray(arr);
    }
};