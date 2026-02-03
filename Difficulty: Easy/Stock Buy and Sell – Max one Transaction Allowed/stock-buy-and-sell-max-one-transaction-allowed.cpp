class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int Max=prices[n-1];
        int ans=0;
        for(int i=n-2;i>=0;i--)
        {
            if(Max<prices[i])
            {
                Max=prices[i];
            }
            else
            {
                ans=max(ans,Max-prices[i]);
            }
        }
        return ans;
    }
};
