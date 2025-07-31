// sum of n natural numbers using functional methof 

#include<bits/stdc++.h>
using namespace std;

int sumR(int n)
{
    if(n==0) return 0;
    return n+sumR(n-1);
}

int facT(int n)
{
    if(n==0 || n==1) return 1;
    return n* facT(n-1);
}

int main()
{
   int output=sumR(3);
    cout<<output;
return 0;
}