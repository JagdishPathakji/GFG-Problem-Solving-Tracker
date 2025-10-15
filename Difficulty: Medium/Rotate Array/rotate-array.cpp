class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
            
            int n=arr.size();//O(1)
            //1.Reverse the whole arr :
            reverse(arr.begin(),arr.end());//O(n)
            //[5 4 3 2 1]
            d = d % n;
            //2.EXPECTED arr[] by Manual Checking  = [3 4 5 1 2]
            //Reverse the first (n-d)Places :(5-2)==3 
            reverse(arr.begin(),arr.begin()+(n-d));//[5 4 3 2)==[5 4 3 ] are reversed 
            //[3 4 5 2 1]//O(n-d)
            
            //3.Reverse the Last d places :
            reverse(arr.begin()+(n-d),arr.end());//[ 3  4  5  1  2 ] == EXPECTED ARRAY BY MANUAL CHECK
            //O(n-d)
        
        // TC :O(3*n)==O(n)
        // SC :O(1)
    }
};