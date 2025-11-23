#include<bits/stdc++.h>
using namespace std;

void print_sequence(int index,vector<int> arr,vector<int> ds)
{
    if(index==arr.size())
    {
     for(auto it:ds)
     {
        cout<<it;
    }
    cout<<endl;
    return ;
    }
     ds.push_back(arr[index]);
     print_sequence(index+1,arr,ds);
     ds.pop_back();
     print_sequence(index+1,arr,ds);
}


int main()
{
    int index=0;
    vector<int> ds;
    vector<int> arr={3,1,2};
    print_sequence(index,arr,ds);
return 0;
}