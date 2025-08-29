// find the missing number
#include<bits/stdc++.h>
using namespace std;

                            

int miss(vector<int> nums) // my approach  logic works noly for sorted array satrating from 1 -> N
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
// else go with SUM orXOR method
int miss2(vector<int> nums)
{
    int n=nums.size();
    int sum=(n*(n+1))/2;
    int s1=0;
    for(int i=0;i<n;i++)
    {
        s1=s1+nums[i];
    }
    int miss_num=sum-s1;
    return miss_num;
}
int main()
{
return 0;
}