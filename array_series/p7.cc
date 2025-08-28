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

int main()
{
return 0;
}