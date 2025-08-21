// strivers approach using vectors
#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int> &arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(i<=high-1 && arr[i]<=pivot)
        {
            i++;
        }
        while(j>=low+1 && arr[j]>pivot)
        {
            j--;
        }
       if(i<j)
        {
        swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}

void quick_sort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
    int P_index=Partition(arr,low,high);
    quick_sort(arr,low,P_index-1);
    quick_sort(arr,P_index+1,high);
    }
}
vector<int> sorted(vector<int> arr)
{
    quick_sort(arr,0,arr.size()-1); // helps to  find the size of the array arr.size()
    return arr;
}


int main()
{
return 0;
}