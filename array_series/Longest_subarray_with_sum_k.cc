#include<bits/stdc++.h>
using namespace std;
int longest_subarray(vector<int> &nums)
{
    unordered_map<int,int> mpp;
    int sum=0,max_length=0,len=0;
    for(int j=0;j<nums.size();j++) // linear itearation
    {
        sum=sum+nums[j];       // sum 
        if(sum==0)
        {
           max_length=max(max_length,j+1);
        }
        else{
            if(mpp.find(sum)!=mpp.end())
            {
               int len = j - mpp[sum];
               max_length = max(max_length,len);
            }
            else
            {
                mpp.insert({sum,j});
            }
        }
    }
    return max_length;
}
int main()
{
return 0;
}  