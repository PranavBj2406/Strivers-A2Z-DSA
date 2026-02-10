#include<bits/stdc++.h>
using namespace std;


// my piece of code

// monotonic approach
vector<int> NGE(vector<int> arr)
{
    vector<int> ans(arr.size());
    stack<int> st;
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(st.empty()) // stack is empty assign ans[i]=-1; push arr[i] to the stack
        {
            ans[i]=-1;
            st.push(arr[i]);
        } 
        else if(st.top()>arr[i]) // top is greater than arr[i]  push arr[i] and assign it to ans[i]
        {
            ans[i]=st.top();
            st.push(arr[i]);
        }
        else // top element is not gretae
        {
            while(!st.empty() && st.top()<=arr[i])
            {
                st.pop();
            }   
            if(st.empty()) ans[i]=-1;
            else ans[i]=st.top();
            st.push(arr[i]);
        }
    }
    return ans;
}


// reduced code by strivers 

vector<int> nextGreater(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> res(n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i]) {
                st.pop();
            }

            if (st.empty()) res[i] = -1;
            else res[i] = st.top();

            st.push(nums[i]);
        }

        return res;
    }

int main()
{
    vector<int> arr={6,0,8,1,3};
    vector<int> ans;
    ans=NGE(arr);
    for(auto it:ans)
    {
        cout<<it;
    }
return 0;
}