class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            // Case 1: ans is empty OR current interval doesn't overlap
            if(ans.empty() || intervals[i][0]>ans.back()[1])
            {
                ans.push_back(intervals[i]);
            }

              // Case 2: There is an overlap → merge intervals v
            else
            {
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};