class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        
        vector<double> result;
        int i = 0, j = 0;
    
        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                result.push_back(a[i]);
                i++;
            } else {
                result.push_back(b[j]);
                j++;
            }
        }
    
        while (i < a.size()) {
            result.push_back(a[i]);
            i++;
        }
    
        while (j < b.size()) {
            result.push_back(b[j]);
            j++;
        }

        if(result.size()%2 == 0)
        return (result[result.size()/2]+result[result.size()/2-1])/2;
        else
        return result[result.size()/2];
    }
};