// move all zeroes to the end
#include<bits/stdc++.h>
using namespace std;
void move_zeroes(vector<int> &arr) // -->  brute approach
{
    vector<int> temp;
    int count=0;
    for(int i=0;i<arr.size();i++) // O(N);
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]); 
            count++;
        }   
    }
    for(int i=0;i<temp.size();i++)  // O(D);
    {
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<arr.size();i++) //0(N-D)
    {
        arr[i]=0;
    }

    // overall TC -> O(2N) // SC-> 0(N)
 }

void move_zeroes_V2(vector<int> &nums) // -->  optimal approach - 2 pointer approach
{
    int i=0,j=-1;
    for(int i=0;i<nums.size();i++)  
    {
        if(nums[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)
    {
        return ;
    }
    for(i=j+1;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            swap(nums[j],nums[i]);
            j++;
        }
    }

    
}

 
int main()
{
    vector<int> arr,nums;
    nums={1,0,2,3,2,0,0};
    move_zeroes_V2(nums);
    for(int k=0;k<nums.size();k++)
    {
        cout<<nums[k];
    }
return 0;
}