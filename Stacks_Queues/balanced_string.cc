class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ) //preserve and is it opening braces
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) return false; // check for empty stack
                char temp=st.top();
                st.pop();
                if((temp=='(' && s[i]==')') || (temp=='{' && s[i]=='}') || (temp=='[' && s[i]==']'))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }    
        }
        if(st.empty()) return true;
        return false;
    }
};