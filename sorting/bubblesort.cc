#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n)
{
    for(int i=n-1;i>=1;i--)  // i must stop at 1ST ELEMENT
    {
        int swap_count=0;
        for(int j=0;j<=i-1;j++) // j -> i-1 cause on elemnet to compare for the last index will throw runtime error
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swap_count++;    // helps to check swap count
            }
        }
        if(swap_count==0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}