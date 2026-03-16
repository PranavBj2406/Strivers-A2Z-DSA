#include<bits/stdc++.h>
using namespace std;


bool custom(pair<int,int> a , pair<int,int> b)
{
    return (double)a.first/a.second > (double)b.first/b.second; // > means descending and < means ascending
}

int fractional_knapsack(vector<pair<int,int>> &arr,int weight)
{
    int value=0;
    sort(arr.begin(),arr.end(),custom);
    for(auto it:arr)
    {
        if(weight>it.second)
        {
            value+=it.first;
            weight-=it.second;
        }
        else
        {
            value+=(((double)it.first/it.second)*weight);
            break;
        }
    }
return value;
}


int main()
{
    vector<pair<int,int>> arr = {
        {60,10},
        {100,20},
        {120,30}
    };

    int capacity = 50;

    int ans = fractional_knapsack(arr, capacity);

    cout << "Maximum value: " << ans << endl;

return 0;
}