#User function Template for python3

class Solution:
    def firstRep(self, s):
        
        i = 0
        
        while i<len(s):
            j = i + 1
            while j<len(s):
                if (s[i] == s[j]):
                    return s[i]
                j = j + 1
                
            i = i + 1
            
        return '#'

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        ans = ob.firstRep(s)
        if ans == '#':
            print(-1)
        else:
            print(ans)

        print("~")

# } Driver Code Ends