#include<bits/stdc++.h>
using namespace std;
int Majority(vector<int> nums)
{
    map<int,int> mpp;
    for(int i=0;i<nums.size();i++)
    {
        mpp[nums[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second>nums.size()/2)
        {
            return it.first;
        }
    }
}
int main()
{
return 0;
}