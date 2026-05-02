class Solution {
  public:
    int findPosition(int n) {
        // code here
        int ans=0,c=0;
        while(n!=0)
        {
            if(n%2!=0)
            {
                c++;
            }
            ans++;
            n/=2;
        }
        if(c>1)
        {
            return -1;
        }
        return ans;
    }
};