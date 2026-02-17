class Solution {
  public:
    string minSum(vector<int> &arr) {
        
        // O(n)
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(),arr.end());
        
        // return type is string only due to overflow problem
        string num1 = "";
        string num2 = "";
        
        bool turn = false;
        while(!pq.empty()) {
            
            if(turn)
            num1 += (pq.top()+'0');
            else
            num2 += (pq.top()+'0');
            
            turn = !turn;
            pq.pop();
        }
        
        // strings are built now string addition logic
        string result = "";
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        
        while(i >= 0 && j >= 0) {
            
            int n1 = num1[i]-'0';
            int n2 = num2[j]-'0';
            
            int sum = n1 + n2 + carry;
            result += (sum%10)+'0';
            carry = (sum/10);
            
            i--;
            j--;
        }
        
        while(i >= 0) {
        
            int sum = num1[i]-'0' + carry;
            result += (sum%10)+'0';
            carry = (sum/10);
            i--;
        }
        
        while(j >= 0) {
            
            int sum = num2[j]-'0' + carry;
            result += (sum%10)+'0';
            carry = (sum/10);
            j--;
        }
        
        if(carry)
        result.push_back(carry+'0');
        
        reverse(result.begin(),result.end());
        
        i = 0;
        while(i < result.size() && result[i] == '0') {
            i++;
        }
        
        return result.substr(i);
    }
};