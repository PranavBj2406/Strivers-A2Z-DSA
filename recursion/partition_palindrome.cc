bool check_palindrome(string &s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void func(int index,vector<string> &ds,vector<vector<string>> &result,string s){
    if(index==s.size()){
        result.push_back(ds);
        return;
    }
    for(int i=index;i<s.size();i++)
    {
        if(check_palindrome(s,index,i)){
            ds.push_back(s.substr(index,i-index+1));
            func(i+1,ds,result,s);
            ds.pop_back();
        }
    }
}

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> ds;
        int index=0;
        func(index,ds,result,s);
        return result;
    }
};