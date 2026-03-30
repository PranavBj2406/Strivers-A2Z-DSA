#include<bits/stdc++.h>
using namespace std;

bool set_bit(int n,int k)
{
    if(n&(1<<k)!=0)
    {
        return true;
    }
    return false;
}

int ith_bit(int n,int k)
{
    int ans=n|(1<<k);
    // ans = n&~(1<<k)
    return ans;
}

int main()
{
    int ans=ith_bit(13,2);
    cout<<ans;
return 0;
}