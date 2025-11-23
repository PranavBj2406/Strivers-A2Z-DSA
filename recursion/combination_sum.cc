#include<bits/stdc++.h>
using namespace std;

void prints(int index, vector<int>& arr, vector<int>& ds, int result) {
    // Base case: reached end of array
    if (index == arr.size()) {
        if (result == 0) {
            // Found a valid combination
            for (int it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }

    // Pick current element if it does not exceed the result
    if (arr[index] <= result) {
        ds.push_back(arr[index]);
        // Stay at the same index for repetition
        prints(index, arr, ds, result - arr[index]);
        ds.pop_back();
    }
    
    // Skip current element (move to next index)
    prints(index + 1, arr, ds, result);
}


int main()
{
    vector<int> ds;
    vector<int> arr={8,2,3,4,3,4,2};
    int result=4;
    int index=0;
    prints(index,arr,ds,result);
return 0;
}