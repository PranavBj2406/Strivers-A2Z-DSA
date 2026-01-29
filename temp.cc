// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// vector<int> arr={1,2,3,4,5};
// int temp=arr[0];
// for(int i=0;i<arr.size()-1;i++)
// {
//     arr[i]=arr[i+1];
// }
// arr[arr.size()-1]=temp;
// for(auto it:arr)
// {
//     cout<<it;
// }
// return 0;
// } 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,1,0,1,1,1};  
    int count=0,max_count=0;
    int i=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
        {
            count++;
            if(max_count<count)
            {
                max_count++;
            }
        }
        else
        {
            count=0;
        }
    }
    cout<<max_count;
return 0;
}