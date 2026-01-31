class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int c=0;
        for(int i=0;i<=31;i++)
        {
            if((n>>i)&1)
            {
                c++;
            }
        }
        return c;
        // return __builtin_popcount(n);
    }
};