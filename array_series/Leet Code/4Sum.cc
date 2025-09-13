// --> better solution
class Solution { 
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int sum=0;
        set<vector<int>> st;
        for(int i=0;i<nums.size();i++)    {
            for(int j=i+1;j<nums.size();j++ ){
                set<int> hashset;
                for(int k=j+1;k<nums.size();k++){
                    sum=target-(nums[i]+nums[j]+nums[k]);
                    if(hashset.find(sum)!=hashset.end()){
                        vector<int> temp={sum,nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());    
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans ={st.begin(),st.end()};
        return ans;
    }
};

// --> optimal solution

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue; // condition to check if i is still same no. and  i is not the first element
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue; // condition to check if j is still same no. and  j is not the first element after i
                int k=j+1;
                int l=nums.size()-1;
                long long sum=0;
                while(k<l)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];  // use long long for safer side note written for it
                    if(sum<target)
                    {
                        k++;
                    }
                    else if(sum>target)
                    {
                        l--;
                    }
                    else
                    {
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(l>k && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};