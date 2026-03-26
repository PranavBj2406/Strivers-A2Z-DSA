class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int l=0,r=0;
        unordered_map<int,int> mpp;
        int count=0;
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            while(mpp.size()>k)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) 
                {
                    mpp.erase(nums[l]);
                }
                l++;
            }
            if(mpp.size()<=k)
            {
                count+=r-l+1;
            }
            r++;
        }
        mpp.clear();
        l=0,r=0;
        int count_l=0;
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            while(mpp.size()>k-1)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) 
                {
                    mpp.erase(nums[l]);
                }
                l++;
            }
            if(mpp.size()<=k-1)
            {
                count_l+=r-l+1;
            }
            r++;
        }
        int ans=count-count_l;
       return ans;
    }
};