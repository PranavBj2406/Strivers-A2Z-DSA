#include<bits/stdc++.h>
using namespace std;

string inttobinary(int n)
{
    string ans;
    while(n!=1)
    {
        if(n%2==1) ans+='1';
        else ans+='0';
        n=n/2; 
    }
    if(n==1) ans+='1';
    else ans+='0';
    reverse(ans.begin(),ans.end());
    return ans;
}

int binarytoint(string ans)
{
    int sum=0;
    int pov=1;
    for(int i=ans.length()-1;i>=0;i--)
    {
        if(ans[i]=='1')
        {
            sum=sum+pov;
        }
        pov*=2;
    }
    return sum;
}

int main()
{
    int n=12;
    string ans=inttobinary(n);
    cout<<ans<<endl;
    int output=binarytoint(ans);
    cout<<output;
return 0;
}