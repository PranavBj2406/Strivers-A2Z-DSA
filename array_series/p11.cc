#include<bits/stdc++.h>
using namespace std;

int twoSum(vector<int> nums,int target) // note solution ooptimal only for yes/no variety
{
    int left=0;
    int right=nums.size()-1;
    sort(nums.begin(),nums.end()); // O
    while(left<right)
    {
        int sum=nums[left]+nums[right];
        if(sum==target)
        {
            return 1;
        }
        if(sum<target)
        {
            left++;
        }
        if(sum>target)
        {
            right--;
        }   
    }
    return 0
}

int main()
{
return 0;
}