#include<bits/stdc++.h>
using namespace std;
vector<int> NSE(vector<int> &arr)
{
    vector<int> ans(arr.size());
    stack<int> st;
    for(int i=arr.size()-1;i>=0;i--)
    {
        while(!st.empty() && st.top()>arr[i])
        {
            st.pop();
        }
        ans[i]=st.empty()?-1:st.top(); // assign st.top() to ans[i]l
        st.push(arr[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr={4, 8, 5, 2, 25};
    vector<int> ans=NSE(arr);
    for(auto it:ans)
    {
        cout<<it;
    }
return 0;
}