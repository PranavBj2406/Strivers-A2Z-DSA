class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string ans;
        int i=0;
        reverse(s.begin(),s.end());
        while(i<s.length())
        {
            if(s[i]!=' ')
            {
            while(i<s.length() && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            reverse(temp.begin(),temp.end());
            ans+=temp;
            temp="";
            while(i<s.length() && s[i]==' ')
            {
                i++;
            }
            if(i<s.length())
            {
                ans.push_back(' ');
            }
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
}; 

// optimal solution

class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string ans;
        int end,start;
        int i=s.length()-1;
        while(i>=0)
        {
            if(s[i]!=' ')
            {
                end=i;
                while(i>=0 && s[i]!=' ')
                {
                    i--;
                }
                start=i+1;
                temp=s.substr(start,end-start+1);
                if(ans.length()==0) ans+=temp;
                else 
                {
                    ans.push_back(' ');
                    ans+=temp;
                }
            }
            else
            {
                i--;
            }
        }
        return ans;
    }
};