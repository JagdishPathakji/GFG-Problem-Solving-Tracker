class Solution {
  public:
    
    int t[1002][1002];
    int recursion(int w, vector<int> &val, vector<int> &wt, int n) {
        
        if(w == 0 || n == 0) 
        return 0;
        
        if(t[w][n-1] != -1) 
        return t[w][n-1];
        
        if(wt[n-1] <= w) {
            return t[w][n-1] = max(val[n-1] + recursion(w-wt[n-1],val,wt,n-1),recursion(w,val,wt,n-1));
        }
        else {
            return t[w][n-1] = recursion(w,val,wt,n-1);
        }
        
    }
  
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
        int n = val.size();
        memset(t,-1,sizeof(t));
        return recursion(W,val,wt,n);
    }
};