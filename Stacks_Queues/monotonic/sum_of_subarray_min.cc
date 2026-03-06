vector<int> NSE(vector<int> &arr)
{
    vector<int> findnse(arr.size());
    stack<int> st;
    for(int i=arr.size()-1;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            st.pop();
        }
        if(st.empty()) findnse[i]=arr.size() ;
        else findnse[i]=st.top();
        st.push(i);
    }
    return findnse;
}

vector<int> PSE(vector<int> &arr)
{
    vector<int> findpse(arr.size());
    stack<int> st;
    for(int i=0;i<arr.size();i++)
    {
        while(!st.empty() && arr[st.top()]>=arr[i])
        {
            st.pop();
        }
        if(st.empty()) findpse[i]=-1;
        else findpse[i]=st.top();
        st.push(i);
    }
    return findpse;
}

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int total=0,left,right;
        vector<int> findpse=PSE(arr);
        vector<int> findnse = NSE(arr);
        int mod=1000000007;
        for(int i=0;i<arr.size();i++)
        {
            left=i-findpse[i];
            right=findnse[i]-i;
            total=(total+(left*right*1LL*arr[i]))%mod;
        }
        return total;
    }
};