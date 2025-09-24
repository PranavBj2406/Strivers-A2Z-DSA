#include<bits/stdc++.h>
using namespace std;
//optimal solution logic
void merge_sorted_arrays(vector<int> arr1,vector<int> arr2)
{
    int left=arr1.size()-1;
    int right=0;
    int n=arr1.size();
    int m=arr2.size();
    while(left>=0 && right<m)
    {
        if(arr1[left]>arr2[right])
        {
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else
        {
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}

int main()
{
return 0;
}