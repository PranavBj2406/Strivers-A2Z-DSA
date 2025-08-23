// reversing of an array

// here start and end will be provided by the user no need to worry abotut that 
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end)
{
 int temp;
 while(end>=start)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        end--;
        start++;
    }
}

// optimal solutions 

// code for left rotation

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.begin() + k);     // first block
        reverse(nums.begin() + k, nums.end());       // second block
        reverse(nums.begin(), nums.end());           // whole array
    }

// code for right rotation

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());           // whole array
        reverse(nums.begin(), nums.begin() + k);     // first block
        reverse(nums.begin() + k, nums.end());       // second block
    }



int main()
{
return 0;
}