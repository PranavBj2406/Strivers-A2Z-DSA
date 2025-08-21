// array based quick sort arrray / my method
#include<bits/stdc++.h>
using namespace std;
//helping_function for quick_sort to find partionining index
int PI(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)// while (arr[i] <= pivot && i <= high - 1) → here, arr[i] is checked before ensuring i <= high - 1. Should be while (i <= high - 1 && arr[i] <= pivot).
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1) // Same for while (arr[j] > pivot && j >= low + 1) → should check j >= low + 1 first.
        {
            j--;
        }
       if(i<j)
       {
        swap(arr[i],arr[j]);// Otherwise, you might read invalid memory at the ends.
       }
    }
    swap(arr[low],arr[j]);
    return j;
}

//quick_sort_main_funtion
void quick_sort(int arr[],int low,int high)
{
    if (low<high)
    {
        int P_index=PI(arr,low,high);
        quick_sort(arr,low,P_index-1);
        quick_sort(arr,P_index+1,high);
    }
}

void sorted(int arr[],int n)
{
    quick_sort(arr,0,n-1);
}


int main()
{
int n;
cin>>n;
int arr[n];
//take inputs of array via looping
sorted(arr,n);
//print the array using loops;
return 0;
}