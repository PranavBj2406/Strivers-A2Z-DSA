#include<bits/stdc++.h>
using namespace std;

void print_subsequences(int index,vector<int> &arr,vector<int> &temp,vector<vector<int>> &ans)
{
    if(index==arr.size())
    {
        ans.push_back(temp);
        return ;
    }
    temp.push_back(arr[index]);
    print_subsequences(index+1,arr,temp,ans);
    temp.pop_back();
    print_subsequences(index+1,arr,temp,ans);
}
int main()
{
return 0;
}