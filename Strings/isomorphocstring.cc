class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mpp;
        map<char,char> rev;
        int i=0;
        while(i<s.length())
        {
            if(mpp.find(s[i])!=mpp.end())
            {
              if(mpp[s[i]]!=t[i])
                {
                    return false;
                }
            }
            else
            {

                if(rev.find(t[i])!=rev.end()) return false;
                mpp[s[i]]=t[i];
                rev[t[i]]=s[i];                
            }
           
            i++;
        }
        return true;
    }
};