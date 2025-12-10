#include<bits/stdc++.h>
using namespace std;

int pow(int x,int n)  // x will be either 4 or 5 and n will be odd or even
{
    int result=1;
    while(n>0){
        if(n&1)
        {
            result=result*x;
            n=n-1;
        }
        x=x*x;
        n=n/2;
    }
    return result;
}

int good_number(int n)
{
    int output=1;
    int odd,even;
    even=(n+1)/2;
    odd=n/2;
    output=pow(5,even)*pow(4,odd);
    return output;
}

int main()
{
    int n=1;
    int ans=good_number(n);
    cout<<ans;
return 0;
}