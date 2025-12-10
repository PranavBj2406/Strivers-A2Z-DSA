#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){  // need for optimixation cause TC -> O(n)
    if(n==0)
    {
        return 1;
    }
    return x*power(x,n-1); // t(n) + t
}

int power_2(int x,int n)
{
    int num=1;
    while(n>1)
    {
        num=num*x;
        n--;
    }
    return num;
}
// optimized solution for power O(logn) --> iteractive approach over recursive coz of space complexity - O(N)
int power_3(int x,int n)  // format is x^n  
{
    int ans=1;
    while(n>0)
    {
        if(n&1) // power is odd
        {
            ans=ans*x; // multipy base by x
            n=n-1; // reduce n by 1
        }
        x=x*x; 
        n=n/2;
    }
    return ans;
}

int main()
{
    int x=2;
    int n=3;
    int result=power_3(x,n);
    cout<<result;
return 0;
}