#include<bits/stdc++.h>
using namespace std;

vector<int> output(vector<int> ans)
{
    //S-SN
    //S2-S2N
    int n = ans.size();
    long long SN=(n*(n+1))/2;
    long long S2N=(n*(n+1)*(2*n+1))/6;
    long long S=0;
    long long S2=0;
    long long val1;
    long long val2;
    for(int i=0;i<n;i++)
    {
        S=S+ans[i];
        S2=S2+(long long)(ans[i]*ans[i]);
        val1=S-SN; // x-y
        val2=S2-S2N; 
        val2=val2/val1; // x+y
        long long x=(val1+val2)/2  ;
        long long y=x-val1;
        return {(int)x,(int)y};
    }
    
}

int main()
{
return 0;
}