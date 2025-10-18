#include<bits/stdc++.h>
using namespace std;
int upper_bound(vector<int> nums,int x) // cond arr[mid] > x
{
    int mid=0;
    int left=0,right=nums.size()-1;
    int ans=nums.size();
    while(left<=right)
    {
        mid=(left+right)/2;
        if(nums[mid]>x)
        {
            ans=mid;
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
        return mid; 
    }
}
int main()
{
return 0;
}