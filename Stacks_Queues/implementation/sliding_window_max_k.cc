#include<bits/stdc++.h>
using namespace std;

vector<int> sliding_window(vector<int> &input,int k)
{
    vector<int> ans;
    int max_num=INT_MIN;
    int temp=k;
    for(int i=0;i<input.size()-k+1;i++) // O(N)
    {
        int j=i;
        while(temp!=0) 
        {
            max_num=max(max_num,input[j]);  // 3 iterations only
            temp--;
            j++;
        }
        ans.push_back(max_num);
        max_num=INT_MIN;
        temp=k;
    }
    return ans;
}

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<nums.size();i++)
        {
            if(!dq.empty() && dq.front()<=i-k)
            {
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<=nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1)
            {
            ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> input={1,3,-1,-3,5,3,2,1,6};
    vector<int> ans=sliding_window(input,3);
    for(auto it:ans)
    {
        cout<<it;
    }
return 0;
}