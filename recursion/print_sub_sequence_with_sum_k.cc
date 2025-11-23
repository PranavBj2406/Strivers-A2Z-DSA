#include <bits/stdc++.h>
using namespace std;
void print_subsequence(int ind, vector<int> arr, vector<int> ds, int sum)
{
    if (ind == arr.size()) //--> base condition
    {
        if (sum == 2)
        {
            for (auto it : ds)
            {
                cout << it;
            }
            cout << " sum = " << sum << endl;
        }
        return;
    }

    ds.push_back(arr[ind]);
    sum = sum + arr[ind];
    print_subsequence(ind + 1, arr, ds, sum);
    ds.pop_back();
    sum = sum - arr[ind];
    print_subsequence(ind + 1, arr, ds, sum);
}

int main()
{
    int ind = 0;
    int sum = 0;
    vector<int> ds;
    vector<int> arr = {1, 2, 1};
    print_subsequence(ind, arr, ds, sum);
    return 0;
}