//{ Driver Code Starts
// Initial Template for C
#include <stdio.h>


// } Driver Code Ends

// User function Template for C
int isEven(int n) {
    
 if (n%2==0){
    return 1;
 } 
else
{return 0;
}
    
}


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int N;
        scanf("%d", &N);
        if (isEven(N))
            printf("%s\n", "true");
        else
            printf("%s\n", "false");
        printf("~\n");
    }
    return 0;
}

// } Driver Code Ends