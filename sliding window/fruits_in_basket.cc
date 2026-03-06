#include<bits/stdc++.h>
using namespace std;

int fruits_in_basket(vector<int> arr) // brute approach TC - O(N*N) SC -  
{
    int len=0,max_len=-1;
    set<int> st;
    for(int i=0;i<arr.size();i++)
    {
       for(int j=i;j<arr.size();j++)
       {
            st.insert(arr[j]);
            if(st.size()>2) break;
            len=j-i+1;
            max_len=max(max_len,len);
       }
       st.clear();
    }
    return max_len;
}

int fruits_in_basket_v2(vector<int> arr) //optimal solution TC-0(N)
{
    int len=0,max_len=-1;
    int l=0,r=0;
    map<int,int> mpp;
    while(r<arr.size())
    {
        mpp[arr[r]]+=1;
        if(mpp.size()>2)
        {
            while(mpp.size()>2)
            {
                mpp[arr[l]]-=1;
                if(mpp[arr[l]]==0)
                {
                    mpp.erase(arr[l]);
                }
                l=l+1; 
            }
        }
        len=r-l+1;
        max_len=max(max_len,len);
        r++;
    }
    return max_len;
}

int main()
{
    vector<int> nums={3,3,3,1,2,1,1,2,3,3,3};
    int res=fruits_in_basket_v2(nums);
    cout<<res;
return 0;
}