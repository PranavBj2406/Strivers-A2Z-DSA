#include<bits/stdc++.h>
using namespace std;

// songle_path

bool solve(int row, int col, vector<vector<int>>& maze, vector<vector<int>>& output){
    int n=maze.size();
    if(row<0||row>=n||col<0||col>=n||maze[row][col]==0||output[row][col]==1) // saftey check
    {
        return false;
    }
    cout << "solve(" << row << "," << col << ")" << endl;
    if(row==n-1 && col==n-1){ // base case
        output[row][col]=1;
        return true;
    }
    output[row][col]=1; // upadte the ouptut matrix
    if(solve(row+1,col,maze,output)==true) return true; // move down
    if(solve(row,col-1,maze,output)==true) return true; // move left 
    if(solve(row,col+1,maze,output)==true) return true; // R
    if(solve(row-1,col,maze,output)==true) return true; // U
    output[row][col]=0; // backtrack
    return false; //
}


int main() {
    // REMOVE: cout << "Starting solve(0,0)..." << endl;
    
    int n = 3;
    vector<vector<int>> maze = {{1,0,1},{1,1,1},{1,1,1}};
    vector<vector<int>> output(n, vector<int>(n, 0));
    
    if(solve(0, 0, maze, output)) {
        cout << "Path found!" << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << output[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}