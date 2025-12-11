#include<bits/stdc++.h>
using namespace std;

// wrap the function with while loop to generate all the sub sequencs

int main()
{
int n=13;
int quo=0;
vector<int> ds;
while(n>=1) // o(n)
{
    quo=n%2;
    n=n/2;
    ds.push_back(quo);
}
reverse(ds.begin(),ds.end()); //O(n)
for(auto it:ds)
{
    cout<<it;
}
return 0;
}