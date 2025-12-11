const  int MOD = 1000000007;
long long power(long long x,long long n) // make sure to save all inputs in long long to prevent issues
{
    long long result=1;
    while(n>0){
        if(n&1)
        {
            result=(result*x) % MOD;
            n=n-1;
        }
        x=(x*x) % MOD ;
        n=n/2;
    }
    return result;
}

class Solution {
public:
    int countGoodNumbers(long long n) {
    long long output=1;
    long long odd,even;
    even=(n+1)/2;
    odd=n/2;
    output=power(5,even)*power(4,odd);
    output = output % MOD;
    return output;
    }
};