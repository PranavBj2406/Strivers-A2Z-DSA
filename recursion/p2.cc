#include<bits/stdc++.h>
using namespace std;

void linear_print(int N,int i=1)
{
    if(i>N) return; 
    cout<<i<<endl;
    i=i+1;               // can skip this line to below
    linear_print(N,i);  //  linear_print(N,i+1); 
}

int main()
{
    linear_print(10);
return 0;
}