class Solution {
public:
    int kDistinctChar(string& s, int k) {
        map<char,int> mpp;
        int max_len=0;
        for(int i=0;i<s.length();i++)
        {
        int distinct=0;
        int len=0;
            for(int j=i;j<s.length();j++)
            {
                if(mpp.find(s[j])==mpp.end())
                {
                    distinct++;
                }
                if(distinct>k) break;
                mpp[s[j]]++;
                len=j-i+1;
                max_len=max(len,max_len);
            }
            mpp.clear();
        }
        return max_len;
    }
};

