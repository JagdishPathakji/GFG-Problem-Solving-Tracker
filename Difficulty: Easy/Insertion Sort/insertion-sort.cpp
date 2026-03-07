class Solution {
  public:
    
    void merge(vector<int> &arr, int start, int mid, int end) {
        
        vector<int> temp;
        
        int i = start;
        int j = mid+1;
        
        
        while(i <= mid && j <= end) {
            
            if(arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }   
            else {
                temp.push_back(arr[j]);
                j++;
            }
        }
        
        while(i <= mid) {
            temp.push_back(arr[i++]);
        }
        
        while(j <= end) {
            temp.push_back(arr[j++]);   
        }
        
        int k = 0;
        while(start <= end) {
            arr[start++] = temp[k++];
        }
    }
  
    void divide(vector<int> &arr, int start, int end) {
        
        if(start >= end)
        return;
        
        int mid = start + (end-start)/2;
        
        divide(arr,start,mid);
        divide(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
  
    void insertionSort(vector<int>& arr) {
        
        divide(arr,0,arr.size()-1);
    }
};