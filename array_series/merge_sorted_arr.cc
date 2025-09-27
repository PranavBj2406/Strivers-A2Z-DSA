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

// shell sorting

void merge_sorted_array_v2(vector<int> a1,vector<int> a2)
{
    int n=a1.size();
    int m=a2.size();
    int total=n+m;
    vector<int> ans(total,0);
    for(int i=0;i<n;i++)
    {
        ans[i]=a1[i];
    }
    for(int i=n;i<m;i++)
    {
        ans[i]=a2[i];
    }
    int gap=(total/2)+(total%2);
    int left=0;
    int right=gap;

    while(gap>0)
    {
        if(ans[left]<ans[right])
        {
            if(right==NULL)
            {
                gap=gap/2;
                left=0;
                right=gap;
                break;
                
            }
            left++;
            right++;
        }
        else
        {
            swap(ans[left],ans[right]);
            left++;
            right++;
            if(right==NULL)
            {
                gap=gap/2;
                left=0;
                right=gap;
                break;
            }
        }
    }
}


int main()
{
return 0;
}

