#include<bits/stdc++.h>
using namespace std;



//memoization
int fib(int n,vector<int> &arr)
{
    if(n<=1) return n;
    else if(arr[n]!=-1) return arr[n];
    else  return arr[n]=fib(n-2,arr)+fib(n-1,arr);
}

//tabulation
int fib(int n)
{
   int prev2=0;
   int prev=1;
   for(int i=2;i<=n;i++)
   {
    int cur=prev2+prev;
    prev2=prev;
    prev=cur;
   }
   return prev;
}

int main()
{
    vector<int> arr(5,-1);
    int A=fib(5,arr);
    cout<<A;
return 0;
}