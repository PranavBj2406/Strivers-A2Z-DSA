#include<bits/stdc++.h>
using namespace std;
int print_spiral_elements(vector<vector<int>> nums) 
{
    int n=nums.size();
    int m=nums[0].size();
    int left=0;
    int top=0;
    int right=n-1;
    int bottom=m-1;
    while(top<=bottom && left<=right)
    {
        // print left -> right
        for(int i=left;i<=right;i++)
        {
            cout<<nums[top][i];
        }
        top++;
        // print top -> bottom
        for(int i=top;i<=bottom;i++)
        {
            cout<<nums[i][right];
        }
        right--;
        if(top<=bottom)
        {
            // print right -> eft
            for(int i=right;i<=left;i++)
            {
                cout<<nums[bottom][i];
            }
            bottom--;
        }

        // print bottom -> top
        if(left<=right)
        {
            for(int i=bottom;i<=top;i++)
            {
                cout<<nums[i][left];
            }
            left--; 
        }
    }
}
int main()
{
return 0;
}