#include<bits/stdc++.h>
using namespace std;

void print_name(int n,int count)
{
    if(count==n) return;
    else{
        cout<<"Pranav"<<endl;
        count=count+1;
        print_name(n,count);
    }
}

int main()
{
    int num;
    cin>>num;
    print_name(num,0);
return 0;
}