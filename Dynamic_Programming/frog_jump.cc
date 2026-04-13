// int helper(vector<int>& heights,int ind,int ans) //recursive
// {
//     if(ind==0) return 0;
//     int left=helper(heights,ind-1,ans)+abs(heights[ind]-heights[ind-1]);
//     int right=INT_MAX;
//     if(ind>1)
//     {
//     right=helper(heights,ind-2,ans)+abs(heights[ind]-heights[ind-2]);
//     }
//     return ans=min(left,right);
// }


//DP
int helper(vector<int>& heights, int ind,vector<int> &DP)
{
    if(ind == 0) return 0;
    if(DP[ind]!=-1) return DP[ind];

    int left = helper(heights, ind - 1)
             + abs(heights[ind] - heights[ind - 1]);

    int right = INT_MAX;

    if(ind > 1)
    {
        right = helper(heights, ind - 2)
              + abs(heights[ind] - heights[ind - 2]);
    }

    return DP[ind]=min(left, right);
}

int helper_tabulation(vector<int> &heights)
{
    vector<int> dp(n+1,-1);
    dp[0]=0;
    for(int i=1;i<heights.size();i++)
    {
        int left=dp[i-1]+abs(heights[i]-heights[i-1]);
        int right=INT_MAX:
        if(i>1)
        {
            int right=dp[i-2]+abs(heights[i]-heights[i-2]); 
        }
        dp[i]=min(left,right);
    }
    return 
}


class Solution {
public:
    int frogJump(vector<int>& heights) {
        return helper(heights, heights.size() - 1);
    }
};


class Solution {
public:
    int frogJump(vector<int>& heights) {
        int ind=heights.size()-1;
        int ans;
        ans=helper(heights,ind,ans);
        return ans;
    }
};