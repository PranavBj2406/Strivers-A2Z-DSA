#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> nums,int x)
{
    int left=0,mid=0;
    int right=nums.size()-1;
    int ans=nums.size();
    while(left<=right)
    {
        mid=(left+right)/2;
        if(nums[mid]==x) ans=min(ans,mid);
        else if(nums[mid]<x)
        {
            left=mid+1;
        } 
        else 
        {
            ans=min(ans,mid);
            right=mid-1;
        }
    }
    return ans;
}

// chat gpt ans

int lower_bound_v2(vector<int> nums, int x) {
    int left = 0;
    int right = nums.size() - 1;
    int ans = nums.size();
    
    while (left <= right) {
        int mid = left + (right - left) / 2; // ✅ Correct mid
        
        if (nums[mid] >= x) { // ✅ This condition is enough
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
return 0;
}