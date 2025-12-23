// #include<bits/stdc++.h>
// using namespace std;


// bool solve(int row,int col,vector<vector<int>> &maze,vector<vector<int>> &output,string &result){
//     int n=maze.size();
//     if(row<0 ||row>=n||col<0||col>=n||output[row][col]==1||maze[row][col]==0){
//         return false ;
//     }
//     if(row==n-1 && col == n-1)
//     {
//         output[row][col]=1;
//         return true;
//     }
//     output[row][col]=1;
//     if(solve(row+1,col,maze,output,result)==true)
//     {
//         result.push_back('D');
//         return true;
//     }
//     if(solve(row,col-1,maze,output,result)==true)
//     {
//         result.push_back('L');
//         return true;
//     }
//     if(solve(row,col+1,maze,output,result)==true)
//     {
//         result.push_back('R');
//         return true;
//     }
//     if(solve(row-1,col,maze,output,result)==true)
//     {
//         result.push_back('U');
//         return true;
//     }
//     output[row][col]=0;
//     return false;    
// }

// string answer(int row,int col,vector<vector<int>> &maze,vector<vector<int>> &output,string &result)
// {
//     solve(row,col,maze,output,result);
//     return result;
// }

// int main()
// {
//     vector<vector<int>> maze = {{1,0,1},{1,1,1},{1,1,1}};
//     int n=maze.size();
//     vector<vector<int>> output(n, vector<int>(n, 0));
//     int row=0,col=0;
//     string result="";
//     result=answer(row,col,maze,output,result);
//     reverse(result.begin(),result.end());
//     cout<<result;
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;


void solve(int row,int col,vector<vector<int>> &maze,vector<vector<int>> &output,vector<string> &result,string &ds)
{
    int n=maze.size();
   if(row<0 ||row>=n||col<0||col>=n||output[row][col]==1||maze[row][col]==0){
        return  ;
    }
    if(row==n-1 && col==n-1)
    {
        result.push_back(ds);
        output[row][col]=0;
        return ;
    }
    output[row][col]=1;

    ds.push_back('D');
    solve(row+1,col,maze,output,result,ds);
    ds.pop_back();

    ds.push_back('L');
    solve(row,col-1,maze,output,result,ds);
    ds.pop_back();

    ds.push_back('R');
    solve(row,col+1,maze,output,result,ds);
    ds.pop_back();

    ds.push_back('U');
    solve(row-1,col,maze,output,result,ds);
    ds.pop_back();

    output[row][col]=0;
    return;
}

vector<string> rat_maze(int row,int col,vector<vector<int>> &maze,vector<vector<int>> &output,vector<string> &result,string &ds){
    solve(row,col,maze,output,result,ds);
    return result;
}

int main()
{
     vector<vector<int>> maze = {{1,0,1},{1,1,1},{1,1,1}};
    int n=maze.size();
    vector<vector<int>> output(n, vector<int>(n, 0));
    int row=0,col=0;
    string ds="";
    vector<string> result; 
    result=rat_maze(row,col,maze,output,result,ds);
    for(auto it:result)
    {
        cout<<it<<endl;
    }
return 0;
}