#include<bits/stdc++.h>
using namespace std;
vector<int> leader_array(vector<int> nums)
{
    vector<int> ans;
    int max=INT_MIN;
    int n=nums.size();
    for(int i=n-1;i>=0;i--)
    {
        if(max<nums[i])
        {
            ans.push_back(nums[i]);
            max=nums[i];
        }
    }
}
int main()
{
return 0;
}