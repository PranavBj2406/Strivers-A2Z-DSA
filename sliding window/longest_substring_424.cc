class Solution {
public:
    int characterReplacement(string s, int k) {
        int len=0,max_len=-1;
        map<int,int> mpp;
    for(int i=0;i<s.length();i++)
    {
        int max_freq=-1;
        for(int j=i;j<s.length();j++)
        {
            mpp[s[j]]++;
            max_freq=max(mpp[s[j]],max_freq);
            len=j-i+1;
            if(len-max_freq<=k)
            {
                max_len=max(max_len,len);
                
            }
        }
        mpp.clear();
    }  
        return max_len;
    }
};


// optimal soltuion 

class Solution {
    public:
    int characterReplacement(string s, int k)
    {
        int len=0,max_len=-1;
        int l=0,r=0;
        map<int,int> mpp;
        while(r<s.length())
        {
            
        }
    }
}