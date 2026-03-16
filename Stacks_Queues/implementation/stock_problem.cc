#include<bits/stdc++.h>
using namespace std;
vector<int> stock_solution(vector<int> &input)
{
    vector<int> ans;
    int temp;
    int count=1;
    for(int i=0;i<input.size();i++)
    {
        temp=input[i];
        for(int j=i;j>=0;j--)
        {
            if(j-1>=0 and input[j-1]<=temp) count++;
            else break;
        }
        ans.push_back(count);
        count=1;
    }
    return ans;
}

int main()
{
    vector<int> input={7,2,1,3,3,1,8};
    vector<int> ans=stock_solution(input);
    for(auto it:ans)
    {
        cout<<it;
    }
return 0;
}