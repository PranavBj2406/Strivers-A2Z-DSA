//print from N to 1
#include<bits/stdc++.h>
using namespace std;

void linear_print_reverse(int N)
{
    if(N<1) return;
    cout<<N<<endl;
    linear_print_reverse(N-1);
}

int main()
{
    linear_print_reverse(10);
return 0;
}