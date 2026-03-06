#include<bits/stdc++.h>
using namespace std;

string remove_k_elements(string &input,int k)
{
    string ans;
    stack<char> st;
    for(int i=0;i<input.length();i++)
    {
        while(!st.empty() && input[i]<st.top())
        {
            while()
            st.pop();
        }
        st.push(input[i]);
    }

    while(!st.empty())
    {
       ans.push_back(st.top());
       st.pop();  
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string input="1432219";
    string ans=remove_k_elements(input);
    cout<<ans;
return 0;
}