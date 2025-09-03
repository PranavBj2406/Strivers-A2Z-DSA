#include<bits/stdc++.h>
using namespace std;
void arrange_arrays(vector<int> &nums)
{
    vector<int> pos, neg;
    for (int x : nums)
    {
        if (x > 0) pos.push_back(x);
        else neg.push_back(x);
    }

    int i = 0, p = 0, n = 0;
    while (p < pos.size() && n < neg.size()) {
        nums[i++] = pos[p++];  // even index
        nums[i++] = neg[n++];  // odd index
    }

    // if extras left (not always needed depending on problem statement)
    while (p < pos.size()) nums[i++] = pos[p++];
    while (n < neg.size()) nums[i++] = neg[n++];
}


int main()
{
    
return 0;
}