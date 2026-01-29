#include<bits/stdc++.h>
using namespace std;


int max_product_subarray(vector<int> nums) // this approach is for arr with odd negatives but no 0 itution based solution
{
    // note use long long to store prodcut
    int n=nums.size();
    int left=0;
    int right=n-1;
    int prefix=1;
    int suffix=1;
    int max_product=INT_MIN;
    while(left<n && right>=0)
    {
        prefix=prefix*nums[left];
        max_product=max(max_product,prefix);
        suffix=suffix*nums[right];
        max_product=max(max_product,suffix);
        left++;
        right--;
        // consoder this logic if arr has 0,s in time_t
        // prefix = (prefix == 0 ? nums[left] : prefix * nums[left]); // Reset on zero
        // max_product = max(max_product, prefix);
        // suffix = (suffix == 0 ? nums[right] : suffix * nums[right]);
        // max_product = max(max_product, suffix)
    }
    return max_product;
}


int main()
{
return 0;
}