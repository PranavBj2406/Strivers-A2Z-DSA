#include<bits/stdc++.h>
using namespace std;

bool Check_palindrome(int i=0,string &s)
{
    if(i>s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return Check_palindrome(i++,s);
}   
int main()
{
return  0;
}