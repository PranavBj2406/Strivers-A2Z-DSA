#include<bits/stdc++.h>
using namespace std;
int minmax(vector<int>& arr, int k) {  // not the optimal solution as optimal solution uses monotnic queue to solve
    int n = arr.size();
    vector<vector<int>> result;
    vector<int> min_ele;
    // Outer loop: choose starting index
    for (int i = 0; i <= n - k; i++) { 
        vector<int> sub;
        // Inner loop: copy k elements into subarray
        for (int j = i; j < i + k; j++) {
            sub.push_back(arr[j]);
        }
        min_ele.push_back(*min_element(sub.begin(),sub.end()));
        result.push_back(sub);
    }
    int  max_ele=*max_element(min_ele.begin(),min_ele.end());
    return max_ele;
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    vector<int> min_ele;
    int max_ele;
    int k=2;
    max_ele=minmax(arr,k);
    cout<<max_ele;
return 0;
} 