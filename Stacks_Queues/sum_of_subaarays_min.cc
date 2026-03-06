class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int MOD = 10000000007;
        int total=0;
        int min_ele=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i;j<arr.size();j++)
            {
                min_ele=min(min_ele,arr[j]);
                total+=min_ele;
            }
            min_ele=INT_MAX;
        }
        return total%MOD;
    }
};  // brute solution TC-O(N^2) , SC-O(1);