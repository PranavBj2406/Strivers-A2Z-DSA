bool safe(int col,int row,vector<string> &ds, int &n)
{
    int duprow=row;
    int dupcol=col;
    // check for NW,W,SW direction;
    while(row>=0 && col>=0){ //NW
        if(ds[row][col]=='Q') return false;
        row--;
        col--;
    }
    //reset the values 
    row=duprow;
    col=dupcol;
    while(col>=0){ //W
        if(ds[row][col]=='Q') return false;
        col--;
    }
    //reset the cla
    row=duprow;
    col=dupcol;
    while(col>=0 && row<n){ //SW
        if(ds[row][col]=='Q') return false;
        col--;
        row++;
    }
    return true;
}

void solve(int col,vector<string> &ds,vector<vector<string>> &result,int n){
    int row;
    if(col==n)
    {
        result.push_back(ds);
        return ;
    }
    for(int row=0;row<n;row++) // check for each row not the col
    {
        if(safe(col,row,ds,n))
        {
            ds[row][col]='Q';
            solve(col+1,ds,result,n);
            ds[row][col]='.';
        }
    }
}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> ds(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            ds[i]=s;
        }
        solve(0,ds,result,n);
        return result;
    }
};


/* col and row must be passed by VALUE, not by reference, because they are modified inside safe() */

/* store original row and col before moving in any direction */

/* after each directional check, reset row and col to original values */

/* check only left-side directions (NW, W, SW) since queens are placed column-wise */

/* do NOT modify recursion variables (col) inside safety checks */

/* col represents recursion depth (current column) */

/* never loop over col inside solve(); loop over rows instead */

/* row must always be initialized via a loop, never left uninitialized */

/* base case: col == n means a valid board configuration */

/* place queen, recurse to next column, then backtrack (remove queen) */

/* backtracking step is mandatory to explore other possibilities */

/* vector<string> represents the chessboard, each string is one row */

/* initialize board with '.' to avoid invalid access */

/* passing col by value allows using col + 1 safely */

/* avoid variable shadowing (e.g., redeclaring col inside loops) */