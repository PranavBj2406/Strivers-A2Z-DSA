// Remove the duplicates from the array

//two pointer tech provides the optimal solution


// Approach: Used two-pointer technique where one pointer tracks the last unique element and the other scans the array. Place each new unique element at the next index.

// Time & Space Complexity: Runs in O(N) time (two passes = O(2N), but constants are ignored in Big-O). Uses O(1) extra space since modifications are done in-place.

// Output: Function returns the count of unique elements (i + 1). The unique array lies between indices 0 → i in the modified array.


#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(vector<int> &arr)
{
    int n=arr.size();
    int i=0,j=1;
    if(j>=n)  // what if element in array is 1
    {
        return 0;// return 0;
    }
    for(j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1; // make sure to return i+1
}

int main()
{
    vector<int> arr;    
    int unique_element = remove_duplicate(arr);
    cout<<unique_element;
return 0;
}