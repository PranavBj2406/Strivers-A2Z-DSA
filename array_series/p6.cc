// funcion for union of an  array

#include<bits/stdc++.h>
using namespace std;

vector<int> union_array(vector<int> arr1,vector<int> arr2)
{
    vector<int> union1;
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0;
    int j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            if(union1.size()==0 || union1.back()!=arr1[i])
            {
                union1.push_back(arr1[i]);
                i++;
            }
        }
        else
        {
            if(union1.size()==0 || union1.back()!=arr2[j])
            {
                union1.push_back(arr2[j]);
                j++;
            }
        }
    }

    while(j<n2)
    {
        if(union1.size()==0 || union1.back()!=arr2[j])
            {
                union1.push_back(arr2[j]);
                j++;
            }
    }

    while (i<n1)
    {
        if(union1.size()==0 || union1.back()!=arr1[i])
            {
                union1.push_back(arr1[i]);
                i++;
            }
    }
    return union1;

}

// intersection of two sorted arrays

vector<int> intersection(vector<int> arr1,vector<int> arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0;
    int j=0;
    vector<int> it;
    while(i<n1 && j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            j++;
        }
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        if(arr1[i]==arr2[j])
        {
            it.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    for(int k=0;k<it.size();k++)
    {
        cout<<it[k];
    }
    return it;
}

int main()
{
    vector<int> arr1={1,1,2,2,4,5};
    vector<int> arr2={1,2,2,3,6};
    intersection(arr1,arr2);
return 0;
}