#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={10, 5, 2, 7, 1, 9};
    int sum=15;
    int i=0,j=0;
    int temp=0;
    int len=0;
    int max_len=0;
    while(j<arr.size())
    {   
        temp+=arr[j];
        if(temp==sum)
        {
            len=j-i+1;
            max_len=max(len,max_len);
            j++;
            temp-=arr[i];
            i++;
        }
        else if(temp<sum) j++;
        else
        {
            temp-=arr[i];
            i++;
        }
        cout<<max_len;
    }
    return 0;
    
}