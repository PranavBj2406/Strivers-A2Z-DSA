#include<bits/stdc++.h>
using namespace std;

// brute approach
class Solution{
    public:
    int findPlatform(vector<int>& Arrival, vector<int>& Departure){
    int count=0;
    int max_count=0;
    for(int i=0;i<Arrival.size();i++)
    {
        for(int j=i+1;j<Arrival.size();j++)
        {
            if(Arrival[j]<Departure[i] || Departure[i]>=Arrival[j] || Arrival[i]>=Arrival[j] || Arrival[j]>=Arrival[i])
            {
                count++;
                max_count=max(count,max_count);
            }
        }
    }
    return max_count;
    }
};

//optimal solution 

int findPlatform(vector<int>& Arrival, vector<int>& Departure){
       sort(Departure.begin(),Departure.end());
       int i=0,j=0;
       int cnt=0;
       int max_count=0;
       while(i<Arrival.size() && j<Departure.size())
       {
        if(Arrival[i]<Departure[j])
        {
            cnt++;
            max_count=max(cnt,max_count);
            i++;
        }
        else
        {
            cnt--;
            j++;
        }
       }
       return max_count;
    }


int main()
{
    vector<int> arr={900, 940, 950, 1100, 1500, 1800};
    vector<int> dept={910, 1200, 1120, 1130, 1900, 2000};
    int max=findPlatform(arr,dept);
    cout<<max;
return 0;
}