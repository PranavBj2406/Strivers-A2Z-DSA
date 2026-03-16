class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump;
        int max_index=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>max_index)
            {
                return false;
            }
            jump=i+nums[i];
            max_index=max(jump,max_index);
        }
        return true;
    }
};