#include<bits/stdc++.h>
using namespace std;
int largest_sequence(vector<int> nums) // better appraoch with TL - O(NlogN)
{
    int cnt_num=0;
    int last_smaller=INT_MIN;
    int longest_cnt=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
       if(nums[i]-1==last_smaller) // condition to check whether itll be the previous element
       {
            cnt_num++;
            
            last_smaller=nums[i];
       }
       else if(nums[i]!=last_smaller) // code when not equal to the prev or so
       {
        cnt_num=1;
        last_smaller=nums[i];
       }
       longest_cnt=max(cnt_num,longest_cnt);
    }
}

int largest_sequence_V2(vector<int> nums)
{
    int longest=1;
    unordered_set<int> ans;
    for(int i=0;i<nums.size();i++)
    {
        ans.insert(nums[i]);
    }
    for(auto it:ans)
    {
        if(ans.find(it-1)==ans.end()) // is used to check if 'it' is the starting element of the sequence if yes enters the if bloacl
        {
            int cnt=1;
            int x=it;
            while(ans.find(x+1)!=ans.end()) // check if the next element -> it+1 exists in the set if so then enters the bloack
            {
                x++;
                cnt++;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}

int main()
{
return 0;
}