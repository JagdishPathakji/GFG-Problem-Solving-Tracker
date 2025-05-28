/*Complete the functions below*/

int find(int par[], int x) {
    // add code here
    if(par[x] == x)
    return x;
    
    return par[x] = find(par,par[x]);
}

void unionSet(int par[], int x, int y) {
    // add code here.
    if(find(par,x) != find(par,y)) {
        int px = find(par,x);
        int py = find(par,y);
        
        par[px] = py;
    }
    
}