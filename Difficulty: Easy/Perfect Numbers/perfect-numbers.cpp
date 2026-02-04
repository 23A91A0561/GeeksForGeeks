class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        int sum=0;
        for(int i=1;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                sum+=i;
                sum+=n/i;
            }
        }
        return (sum-n)==n;
    }
};