#include<bits\stdc++.h>
using namespace std;

void pattern1(int num)
{
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
int num;
cin>>num;
pattern1(num);
return 0;
}