#include<bits/stdc++.h>
using namespace std;


struct Data
{
    int starting;
    int ending;
    int pos;
};

bool sort1(Data a, Data b)
{
    return a.ending<b.ending;
}


int total_meetings(vector<int> &starting,vector<int> &ending)
{
    vector<Data> arr;
    vector<int> order;
    for(int i=0;i<starting.size();i++)
    {
        arr.push_back({starting[i],ending[i],i});
    }
    sort(arr.begin(),arr.end(),sort1);
    int count=1;
    int freetime=arr[0].ending;
    order.push_back(arr[0].pos);
    for(int i=1;i<arr.size();i++)
    {
       if(freetime<arr[i].starting)
       {
        count++;
        freetime=arr[i].ending;
        order.push_back(arr[i].pos);
       }
    }
    return count;
}



int main()
{
return 0;
}