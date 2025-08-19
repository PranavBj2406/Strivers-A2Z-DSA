#include<bits/stdc++.h>
using namespace std;

// void swap(int &a,int &b) helper funtcion
// {
//     a=a+b;
//     b=a-b;
//     a=a+b;
// }

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // selection algo//
    // find min in the array swap //
    for(int i=0;i<n-1;i++) 
    {
        int min=i;
        for(int j=i;j<n;j++)  // jjob of the inner loop is to find the min element 
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[i],a[min]);  // used function from <algorithim> or you can write helper function
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

return 0;
}