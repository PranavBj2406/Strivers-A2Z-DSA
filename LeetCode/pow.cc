class Solution {
public:
    double myPow(double x, int n) {
        long long N =n ;  // mandatory type conversion to prevenet overflow
        double ans=1;
        if(n<0) // --> logic for holding negative number
        {
            x=1/x;
            N=-(N);
        }
        while(N>0){
        if(N&1){
            ans=ans*x;
            N=N-1;
        }
        x*=x;
        N=N/2;
        }
        return ans;
    }
};

// 