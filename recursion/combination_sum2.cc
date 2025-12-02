#include<bits/stdc++.h>
using namespace std;
void combination_sum2_rec(int index, int target,
                          vector<int> &ds,
                          vector<int> &arr,
                          vector<vector<int>> &ans) {
    if (target == 0) {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < (int)arr.size(); ++i) {
        // skip duplicates at the same recursion level
        if (i > index && arr[i] == arr[i-1]) continue;

        // pruning: if current value > remaining target, break (array is sorted)
        if (arr[i] > target) break;

        ds.push_back(arr[i]);
        combination_sum2_rec(i + 1, target - arr[i], ds, arr, ans); // use i, arr[i]
        ds.pop_back();
    }
}

vector<vector<int>> combination_sum2(vector<int> candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    combination_sum2_rec(0, target, ds, candidates, ans);
    return ans;
}


int main()
{

return 0;
}