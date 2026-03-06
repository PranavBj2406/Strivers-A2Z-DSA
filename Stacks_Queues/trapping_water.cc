#include<bits/stdc++.h>
using namespace std;


// brute approach - O(N )

vector<int> prefix_max(vector<int> &arr)
{
    vector<int> premax(arr.size());
    premax[0]=arr[0];
    for(int i=1;i<arr.size();i++)
    {   
        premax[i]=max(premax[i-1],arr[i]);
    }
    return premax;
}


vector<int> suffix_max(vector<int> &arr)
{
    int n=arr.size()-1;
    vector<int> sufmax(arr.size());
    sufmax[n]=arr[n];
    for(int i=n-1;i>=0;i--)
    {
        sufmax[i]=max(sufmax[i+1],arr[i]);
    }
    return sufmax;
}


class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefix_arr=prefix_max(height);
        vector<int> suffix_arr=suffix_max(height);
        int total=0;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]<prefix_arr[i] && height[i]<suffix_arr[i])
            {
            total+=min(prefix_arr[i],suffix_arr[i])-height[i];
            }
        }
        return total;
    }
};

//optimal solution;

class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0,rmax=0,l=0,r=height.size()-1,total=0;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]<lmax)
                {
                    total+=lmax-height[l];
                }
                else
                {
                    lmax=max(height[l],lmax);
                }
                l++;
            }
            else
            {
                if(height[r]<rmax)
                {
                    total+=rmax-height[r];
                }
                else
                {
                    rmax=max(height[r],rmax);
                }
                r--;
            }
        }
        return total;
    }
};


int main()
{
    vector<int> arr={};
    vector<int> premax=suffix_max(arr);
    for(auto it:premax)
    {
        cout<<it;
    }
return 0;
}