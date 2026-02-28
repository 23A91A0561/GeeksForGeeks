class Solution {
  public:
    int ans=0;
    void sum(int n)
    {
        if(n==0)
        {
            return;
        }
        ans+=n%10;
        sum(n/10);
    }
    int digitalRoot(int n) {
        // code here
        sum(n);
        while(ans>9)
        {   int dup=ans;
            ans=0;
            sum(dup);
        }
        return ans;
    }
};