bool custom(pair<char,int> &a,pair<char,int> &b)
{
    return a.second>b.second;
}

class Solution {
public:
    string frequencySort(string s) {
       map<char,int> mpp;
       string ans;
       vector<pair<char,int>> vt;
       for(int i=0;i<s.length();i++)
       {
        mpp[s[i]]++;
       }
        for (auto it:mpp)
        {
            vt.push_back({it.first,it.second});
        }
        sort(vt.begin(),vt.end());
        sort(vt.begin(),vt.end(),custom);
        for(int i=0;i<vt.size();i++)
        {
            while(vt[i].second!=0)
            {
                ans+=vt[i].first;
                vt[i].second--;
            }
        }
        return ans;
    }
};