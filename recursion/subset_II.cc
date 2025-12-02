// brute appraoach 

void subset(int index,vector<int> &nums,vector<int> &ds,set<vector<int>> &result)
{
    if(index==nums.size())
    {
        result.insert(ds);
        return;
    }
    ds.push_back(nums[index]);
    subset(index+1,nums,ds,result);
    ds.pop_back();
    subset(index+1,nums,ds,result);
}


class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> answer;
        int index=0;
        vector<int> ds;
        set<vector<int>> result;
        sort(nums.begin(),nums.end());
        subset(index,nums,ds,result);
        answer.assign(result.begin(),result.end());
        sort(answer.begin(),answer.end());
        return answer;
    }
};


//optimal soln
//concept is similr to combination_sum_2 notes see for insights


void subset(int index,vector<int> &ds,vector<int> &nums,vector<vector<int>> &result)
{
    result.push_back(ds);
    for(int i=index;i<nums.size();i++)
    {
        if(i>index && nums[i]==nums[i-1])continue;
        ds.push_back(nums[i]);
        subset(i+1,ds,nums,result);
        ds.pop_back();
    }
}

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ds;
        int index=0;
        sort(nums.begin(),nums.end());
        subset(index,ds,nums,result);
        sort(result.begin(),result.end());
        return result;
    }
};