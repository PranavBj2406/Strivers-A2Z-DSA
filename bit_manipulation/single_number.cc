#include<bits/stdc++.h>
using namespace std;
vector<int> unique_number(vector<int> &arr)
{
    int num=0;
    int n1=0;
    int n2=0;
    vector<int> ans;
    for(int i=0;i<arr.size();i++)
    {
        num=num^arr[i];
    }
    int max=num&-num;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]&max!=0) 
        {
            n1^=arr[i];
        }
        else n2^=arr[i];
    }
    ans.push_back(n1);
    ans.push_back(n2);
    return ans;
}

int main()
{
return 0;
}