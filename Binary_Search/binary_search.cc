#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr,int ele) // iterative approach
{
    int low=0;
    int high=arr.size()-1;
    int mid=0;
   while(low<=high)
   {
    if(arr[mid]==ele) return mid;
    else if(arr[mid]>ele) low=mid+1;
    else high=mid-1;
   }
   return -1;
}

// recursive application

int recursive_BS(vector<int> nums,int left,int right,int ele)
{
   int mid=0;
   if(left>right)
   {
        return -1;
   }
   mid=left+right/2;
   if(nums[mid]>ele)
   {
    return recursive_BS(nums,left,mid-1,ele);
   }
   else if(nums[mid]<ele)
   {
    return recursive_BS(nums,mid+1,right,ele);
   }
   else if(nums[mid]==ele)
   {
       return mid;
   }
}

int main()
{
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};

return 0;
}