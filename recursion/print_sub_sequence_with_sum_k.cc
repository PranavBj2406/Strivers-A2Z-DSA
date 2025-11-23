#include <bits/stdc++.h>
using namespace std;
int print_subsequence(int ind, vector<int> arr, vector<int> ds, int sum)
{
    if (ind == arr.size()) //--> base condition
    {
        if (sum == 2)
        {
            return 1;
        }
        else{

            return 0 ;
        }
    }

    ds.push_back(arr[ind]);
    sum = sum + arr[ind];
    int left = print_subsequence(ind + 1, arr, ds, sum);
    ds.pop_back();
    sum = sum - arr[ind];
    int right = print_subsequence(ind + 1, arr, ds, sum);
    return left+right;
}

int main()
{
    int ind = 0;
    int sum = 0;
    vector<int> ds;
    vector<int> arr = {1, 2, 1};
    int output = print_subsequence(ind, arr, ds, sum);
    cout<<output;
    return 0;
}