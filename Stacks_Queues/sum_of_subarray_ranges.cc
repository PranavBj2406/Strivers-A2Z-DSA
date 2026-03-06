// ranges = largest ele - smallest ele

#include<bits/stdc++.h>
using namespace std;

int range_sum(vector<int> &arr)
{
    int min_ele=INT_MAX;
    int max_ele=INT_MIN;
    int total=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i;j<arr.size();j++)
        {
            min_ele=min(min_ele,arr[j]);
            max_ele=max(max_ele,arr[j]);
            total+=(max_ele-min_ele);    
        }
        min_ele=INT_MAX;
        max_ele=INT_MIN;
    }
    return total;
}

int main()
{
    vector<int> arr={1,4,3,2};
    int total=range_sum(arr);
    cout<<total;
return 0;
}