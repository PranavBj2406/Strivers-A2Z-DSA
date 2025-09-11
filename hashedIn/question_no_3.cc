#include<bits/stdc++.h>
using namespace std;

int Segment_result(string &text,int k,int l)
{
    int char_count=0;
    vector<int> hash(256,0);  
    for(int i=0;i<l;i++)        //O(N) --> TC
    { 
        hash[text[i]]++;        //O(N) --> SC
    }

    for(int i=0;i<hash.size();i++) //)(
    {
        if(hash[i]!=0)
        {
            char_count++;
        }
    }

    if(char_count==k)
    {
        return -1;
    }
    else return 0;
}

int main()
{
return 0;
}