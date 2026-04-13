#include<bits/stdc++.h>
using namespace std;

void print_N_numbers(int n,int i)
{
    if(i>n)
    {
        return ;
    }
    cout<<i;
    print_N_numbers(n,i+1);
}

void print_N_reverse(int i)
{
    if(i==0)
    {
        return ;
    }
    print_N_reverse(i-1);
    cout<<i;
}

void Print_Char_reverse(char c)
{
    if(c<'A')
    {
        return ;
    }
    Print_Char_reverse(c-1);
    cout<<c;
}

void reverse1(vector<int> &arr,int p,int q)
{
    if(p>=q)
    {
        return;
    }
    reverse1(arr,p+1,q-1);
    swap(arr[p],arr[q]);
}

void palindrom_check()
{
    
}



int main()
{
    // char c='E';
    // Print_Char_reverse(c);
    int n=5;
    int ans=sum_n(5);
    cout<<ans;
return 0;
}