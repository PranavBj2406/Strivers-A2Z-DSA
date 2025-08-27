// find the missing number
#include<bits/stdc++.h>
using namespace std;
int miss(vector<int> nums)
{
    int n=nums.size();
    int j=1;
    for(int i=1;i<=n;i++)
    {
        if(j!=nums[i])
        {
            return j;
        }
        j++;
    }
    return 0;
}
int main()
{
return 0;
}