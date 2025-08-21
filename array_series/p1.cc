// to find the largest element in an array
// sizeeof(arr)/sizeof(arr[0]) will yield the size of the array.
// arr.size()-1 yields the size of the vector.


#include<bits/stdc++.h>
using namespace std;

int Lement(int arr[],int n)
{
    int i=0;
    int temp=arr[0],second_largest=-1;
    for( i=0;i<n;i++)
    {   
        if(arr[i]>temp)
        {
           temp=arr[i];
        } 
    }
    return temp;
}
int SLement(int arr[], int n) {
    if(n < 2) return -1; // edge case1: the array has less than 2 elements

    int largest = arr[0];
    int second_largest = -1;

    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest) { //edge case 2 : the first element is the largestt .
            second_largest = arr[i];
        }
    }
    return second_largest;
}


int main()
{
int arr[]={3,2,1,5,2};
int n = sizeof(arr)/sizeof(arr[0]);
int output=Lement(arr,n);
cout<<output;
return 0;
}