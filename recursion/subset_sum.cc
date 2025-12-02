#include<bits/stdc++.h>
using namespace std;
void subset_sum(int index,int sum,vector<int> &arr,vector<int> &ds,vector<int> &result)
{
    if(index == arr.size())
    {
       result.push_back(sum);
       return;
    }
    ds.push_back(arr[index]);
    sum=sum+arr[index];
    subset_sum(index+1,sum,arr,ds,result);
    ds.pop_back();
    sum=sum-arr[index];
    subset_sum(index+1,sum,arr,ds,result);   
}


int main()
{

    int ind = 0;
    int sum = 0;
    vector<int> ds;
    vector<int> arr = {1, 2, 1};
    vector<int> result;
    subset_sum(ind,sum,arr, ds,result);
    sort(result.begin(),result.end());
    for(auto it:result)
    {    
        cout<<it<<endl;
    }
    
    return 0;
}