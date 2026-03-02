class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        
        vector<int> countofocc(N);
        
        for(int i=0; i<N; i++) {
            int c = 1;
            for(int j=i+1; j<N; j++) {
                if(A[j] == A[i]) c++;
            }
            
            countofocc[i] = c;
        }    
        
        
        vector<int> ans;
        
        for(int i=0; i<num; i++) {
            
            int L = Q[i][0];
            int R = Q[i][1];
            int K = Q[i][2];
            int c = 0;
            
            for(int j=L; j<=R; j++) {
                if(countofocc[j] == K) c++;
            }
            
            ans.push_back(c);
        }
        
        return ans;
    }
};
