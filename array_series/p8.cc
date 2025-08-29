#include<bits/stdc++.h>
using namespace std;

int XOR(vector<int> nums)
{
    int Xor1=0;
    for(int i=0;i<nums.size();i++)
    {
        Xor1=Xor1^nums[i];
    }
    return Xor1;
}

int main()
{
return 0;
}