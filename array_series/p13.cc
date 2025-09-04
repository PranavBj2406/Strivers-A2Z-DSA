#include<bits/stdc++.h>
using namespace std;
// brute force approach
void arrange_arrays(vector<int> &nums) 
{
    int n=nums.size();
    vector<int> ans(n,0);
    int posIndex=0;
    int negIndex=1;
    for(int i=0;i<nums.size();i++) // loop separate the +ve and -ve
    {
        if(nums[i]>0)
        {
            ans[posIndex]==nums[i];
            posIndex+=2;
        }
        else
        {
            ans[negIndex]==nums[i];
            negIndex+=2;
        }
    }
}

int main()
{
    
return 0;
}