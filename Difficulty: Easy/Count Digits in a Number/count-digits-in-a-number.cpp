class Solution {
  public:
    int ans=0;
    void count(int n)
    {
        if(n==0)
        {
            return;
        }
        ans++;
        count(n/10);
    }
    int countDigits(int n) {
        // Code here
        count(n);
        return ans;
    }
};