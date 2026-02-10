#include <bits/stdc++.h>
using namespace std;

// bool is_operator(char c)
// {
//     if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^') return true;
//     return false;
// }

bool is_empty(stack<char> st)
{
    if (st.top() == -1)
        return true;
    return false;
}

int priority(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '(')
        return 0;
    else
    {
        return 3;
    }
}

string inf_postfix(string s)
{
    string ans;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) // operand
        {
            ans = ans + s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                ans.push_back(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }
    if (!st.empty())
    {
        while (st.size() != 0)
        {
            ans = ans + st.top();
            st.pop();
        }
    }
    return ans;
}

string infix_prefix(string s)
{
    string ans;
    stack<char> st;
    reverse(s.begin(), s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(') s[i] = ')';
       else if(s[i]==')') s[i]='(';
    }
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans = ans + s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        }
        else
        {
            if (s[i] == '^')
            {
                while (!st.empty() && priority(s[i]) <= priority(st.top()))
                {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && priority(s[i]) < priority(st.top()))
                {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        ans=ans+st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string s = "a+b*(c^d-e)";
    string ans;
    ans = infix_prefix(s);
    cout << ans;
    return 0;
}