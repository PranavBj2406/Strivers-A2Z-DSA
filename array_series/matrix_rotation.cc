#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> rotate_matrix(vector<vector<int>> nums,int n)
{
    int temp;
    vector<vector<int>> ans(n, vector<int>(n)); // needs  to allocate space for the side 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[j][n-i-1]=nums[i][j];
        }
    } 
    return ans;
}

vector<vector<int>> rotate_matrix_V2(vector<vector<int>> nums,int n)
{
    //function to transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++) // note j=i+1 makes sure j swaps only once
        {
            if(j!=i)
            {
                swap(nums[i][j],nums[j][i]);
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        reverse(nums[i].begin(),nums[i].end());
    }
}
int main()
{
return 0;
}