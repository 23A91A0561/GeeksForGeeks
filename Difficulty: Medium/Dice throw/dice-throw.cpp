class Solution {
  public:
    int noOfWays(int m, int n, int x) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(x+1,0));
        dp[0][0]=1;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=m;k++)
                {
                    if(i>=k)
                    dp[j][i]+=dp[j-1][i-k];
                }
            }
        }
        return dp[n][x];
    }
};