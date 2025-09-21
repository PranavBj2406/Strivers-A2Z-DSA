#include<bits/stdc++.h>
using namespace std;
int countSubarraysWithXor(vector<int>& nums, int k) {
    unordered_map<int,int> mpp;
    int xr = 0, cnt = 0;

    for(int i=0;i<nums.size();i++) { 
        xr ^= nums[i]; 
        if(xr == k) cnt++;
        if(mpp.count(xr ^ k)) cnt += mpp[xr ^ k];
        mpp[xr]++;
    }
    return cnt;
}
int main()
{
return 0;
}