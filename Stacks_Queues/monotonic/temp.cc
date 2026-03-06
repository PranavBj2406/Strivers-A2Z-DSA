#include<bits/stdc++.h>
using namespace std;

vector<int> NSE(vector<int> &arr)
{
    vector<int> findnse(arr.size());
    stack<int> st;
    for(int i=arr.size()-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            st.pop();
        }
        if(st.empty()) findnse[i]=arr.size() ;
        else findnse[i]=st.top();
        st.push(i);
    }
    return findnse;
}

int main()
{
vector<int> arr={6,0,8,1,3};
vector<int> out=NSE(arr);
for(auto it:out)
{
    cout<<arr[it];
}
return 0;
}