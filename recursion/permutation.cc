#include<bits/stdc++.h>
using namespace std;

void sequence(int index,vector<int> &ds,vector<int> &nums,vector<vector<int>> &result){
    if(ds.size()==nums.size())
    {
        result.push_back(ds);
        return ;
    }
    for(int i=index;i<nums.size();i++)
    {
        ds.push_back(nums[i]);
        sequence(index+1,ds,nums,result);
        ds.pop_back();
    }
}

vector<vector<int>> permutation(vector<int> &nums){
    int index=0;
    vector<int> ds;
    vector<vector<int>> result;
    sort(nums.begin(),nums.end());
    sequence(index,ds,nums,result);
    for(auto it:result)
    {
       for(auto bt:it)
       {
        cout<<bt<<endl;
       }
    }

}
int main()
{
    
return 0;
}