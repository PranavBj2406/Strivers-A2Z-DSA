class Solution { // better solution
public:
    int countPrimes(int n) {
        vector<int> hash(n,1);
        int cnt=0;
        if(n==0 || n==1) return 0;
        for(int i=2;i<n;i++)
        {
            if(hash[i]==1)
            {
                int temp=i*2;
                while(temp<n) 
                {
                    hash[temp]=0;
                    temp+=i;
                }
                cnt++;
            }
        }
        return cnt;
    }
};

// optimal solution

class Solution {
public:
    int countPrimes(int n) {
        vector<int> hash(n,1);
        int cnt=0;
        if(n==0 || n==1) return 0;
        for(int i=2;i*i<n;i++)
        {
            if(hash[i]==1)
            {
                int temp=i*i;
                while(temp<n) 
                {
                    hash[temp]=0;
                    temp+=i;
                }
            }
        }

        for(int i=2;i<hash.size();i++)
        {
            if(hash[i]==1) cnt++;
        }
        return cnt;
    }
};