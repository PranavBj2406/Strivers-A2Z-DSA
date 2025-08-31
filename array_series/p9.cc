#include<bits/stdc++.h>
using namespace std;
// logic to find the longest consecutive subarray whose sum is equal to 0

int longestSubarraywithSum(vector<int> a,long long k)
{
    int left=0,right=0;
    long long k ;
    int maxlen=0;
    int sum=a[0];
    while(right<a.size())
    {
        while(left<=right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<a.size()) 
        {
            sum+=a[right];
        }
    }
    return maxlen;
}


int main()
{
return 0;
}