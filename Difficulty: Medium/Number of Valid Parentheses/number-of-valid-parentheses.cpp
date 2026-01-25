class Solution {
  public:
    long long fun(int n)
    {
        if(n==0)
        {
            return 1;
        }
        return n*fun(n-1);
    }
    int findWays(int n) {
        // code here
        if(n%2!=0)
        {
            return 0;
        }
        n/=2;
        return fun(2*n)/(fun(n+1)*fun(n));
    }
};