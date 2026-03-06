class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        stack<char> st;

        if(k==num.length()) 
        {
            ans.push_back('0');
            return ans;
        }

        for(int i=0;i<num.length();i++)
        {
            while(!st.empty() && k>0 && st.top()>num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

         // 🔴 missing part (now fixed)
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        // build resultant string
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        //reverse the ans
        reverse(ans.begin(),ans.end());

        int i=0;
        while(i<ans.length() && ans[i]=='0')
        {
            i++;
        }
        ans=ans.substr(i); 

        if(ans.empty())
        {
           ans.push_back('0');
           return ans;
        }

        return ans;
    }
};