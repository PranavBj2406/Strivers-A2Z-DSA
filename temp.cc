// #include<bits/stdc++.h>
// using namespace std;

// vector<int> leader_of_array(int &temp,vector<int> &arr)
// {
//     temp = INT_MIN;
//     vector<int> result;
//     for(int i=arr.size()-1;i>=0;i--)
//     {
//         if(arr[i]>temp)
//         {
//             result.push_back(arr[i]);
//             temp=arr[i];
//         }
//     }
//     return result;
// }

// int main()
// {
//     vector<int> arr = {12,0,6,24,7,4,2};
//     int temp;
//     vector<int> result;
//     result = leader_of_array(temp,arr);
//     reverse(result.begin(),result.end());
//     for(int i=0;i<result.size();i++)
//     {
//         cout<<result[i];
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<4;j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1,4,2,4,5};
//     for(auto it : arr)
//     {
//         cout<<it<<endl;
//     }
// return 0;
// }

// map container

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mpp;
    mpp={{3,1}};
    for(auto it:mpp)
    {
        cout<<it.first;
    }
return 0;
}