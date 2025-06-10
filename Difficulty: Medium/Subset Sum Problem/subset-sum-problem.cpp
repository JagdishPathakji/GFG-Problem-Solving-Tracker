class Solution {
  public:
    
    void find(vector<int> &arr, int &sum, int &temp, bool &found, int index) {
        
        if(found) return;
        
        if(temp > sum) return;
        
        if(index >= arr.size()) {
            if(sum == temp) {
                found = true;
            }
            return;
        }
        
        temp += arr[index];
        find(arr,sum,temp,found,index+1);
        temp -= arr[index];
        find(arr,sum,temp,found,index+1);
    }
  
    bool isSubsetSum(vector<int>& arr, int sum) {
        
        int temp = 0;
        bool found = false;
        int index = 0;
        find(arr,sum,temp,found,index);
        return found;
    }
};