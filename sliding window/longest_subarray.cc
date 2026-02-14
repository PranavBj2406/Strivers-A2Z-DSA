#include<bits/stdc++.h>
using namespace std;
int longest_sublength(string &s)
{
    map<char,int> mpp;
    int len=0,max_len=INT_MIN;
    int l=0,r=0;
    while(r<s.length())
    {
        if(r==0) mpp[s[r]]=r;
        else if(mpp.find(s[r])!=mpp.end()) // element is there in map check
        {
            if(l<=mpp[s[r]])
            {
                l=mpp[s[r]]+1;
            }
        }
       len=r-l+1;
       max_len=max(max_len,len);
       mpp[s[r]]=r;
       r=r+1;
    }
    return max_len;
}


//  cleaner version 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mpp;
    int len=0,max_len=0;
    int l=0,r=0;
    while(r<s.length())
    {
        if(mpp.find(s[r])!=mpp.end()) // element is there in map check
        {
            if(l<=mpp[s[r]])
            {
                l=mpp[s[r]]+1;
            }
        }
       len=r-l+1;
       max_len=max(max_len,len);
       mpp[s[r]]=r;
       r=r+1;
    }
    return max_len;
    }
};

int main()
{
    string s="cadbzaabcd";
    int ans=longest_sublength(s);
    cout<<ans;
return 0;
}