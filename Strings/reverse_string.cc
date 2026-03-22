class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=s+s;
        int k=s.length();
        for(int i=0;i<s.length();i++)
        {
            string comp=temp.substr(i,k);
            cout<<comp<<endl;
            if(comp==goal)
            {
                return true;

            }
        }
        return false;
    }
};
// optimal slution