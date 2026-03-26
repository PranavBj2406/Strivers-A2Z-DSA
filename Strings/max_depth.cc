class Solution {
public:
    int maxDepth(string s) {
      int count=0;
      int max_depth=0;
      for(int i=0;i<s.length();i++)
      {
        if(s[i]=='(')
        {
            count++;
            max_depth=max(count,max_depth);
        }
        else if(s[i]==')')
        {
            count--;
        }
      }  
      return max_depth; 
    }
};

// basically max appearence of ( in given string