// rotation of the elements to the left

#include<bits/stdc++.h>
using namespace std;

vector<int> rotation(vector<int> &arr,int rotation_count)
{
    int k=0;
    while(k<rotation_count)  // O(N^2) --> brute approach
    {
        int temp=arr[0];
        int n = arr.size();
        for(int i=0;i<n-1;i++) // can cause array out of bound issues for i<n hence I<n-1
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    return arr;
}

int main()
{
vector<int> arr;
int k;
cin>>k;// indicates the no. of rotations that must be performed
arr={1,2,3,4,5};
int n=arr.size();
rotation(arr,k);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}