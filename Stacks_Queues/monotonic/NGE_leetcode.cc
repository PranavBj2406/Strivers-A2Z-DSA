class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans(nums2.size());
        vector<int> ans1(nums1.size());
        stack<int> st;
        map<int,int> mpp;


        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums2[i])
            {
                st.pop();
            }
            if(st.empty()) ans[i]=-1;                          
            else ans[i]=st.top();
            mpp[nums2[i]]=ans[i];
            st.push(nums2[i]);    
        }

        for(int i=0;i<nums1.size();i++)
        {
            ans1[i]=mpp[nums1[i]];
        }
        return ans1;
    }
};



// optimal soltuion

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> next;
        stack<int> s;

        for (int i = nums2.size() - 1; i >= 0; --i) {
            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }
            next[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }

        vector<int> res;
        for (int num : nums1) {
            res.push_back(next[num]);
        }
        return res;
    }
};