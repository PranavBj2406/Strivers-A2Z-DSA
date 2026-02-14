#include<bits/stdc++.h>
using namespace std;

int max_consecutive_ones(vector<int> &arr,int &k)
{
    int l=0;
    int r=0;
    int max_len=-1;
    int len=0;
    int count=0;
    while(r<arr.size())
    {
        if(arr[r]==0) count++;
        if(count>k)
        {
            while(count>k)
            {         
                if(arr[l]==0)
                {
                    count--;
                }                
                l=l+1;                
            }
        }
        // cout<<"l->pos="<<l<<","<<"r->pos="<<r<<",."<<"count('0')="<<count<<endl;
        len=r-l+1;
        max_len=max(max_len,len);
        r++;
    }
    return max_len;
}

int main()
{
    vector<int> arr={0,1,1,1,0,0,0,1,1,1,0};
    int k=2;
    int result=max_consecutive_ones(arr,k);
    cout<<"MAX_SIZE == "<<result;
return 0;
}