class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        if(arr.size() < 4)
        return {};
        
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        
        for(int i=0; i<arr.size()-3; i++) {
            
            if(i > 0 && arr[i] == arr[i-1])
            continue;
            
            for(int j=i+1; j<arr.size()-2; j++) {
                
                if(j > i+1 && arr[j] == arr[j-1])
                continue;
                
                int s = j+1;
                int e = arr.size()-1;
                
                int realtarget = target - arr[i] - arr[j];
                while(s < e) {
                    
                    if(arr[s] + arr[e] == realtarget) {
                        vector<int> quad = {arr[i], arr[j], arr[s], arr[e]};
                        ans.push_back(quad);
                        
                        while(s < e && arr[s] == quad[2]) s++;
                        while(s < e && arr[e] == quad[3]) e--;
                    }
                    else if(arr[s] + arr[e] > realtarget) {
                        e--;
                    }
                    else {
                        s++;
                    }
                }
            }
        }
        
       
        return ans;
    }
};