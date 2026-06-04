class Solution {
  public:
    int maxSubstring(string &s) {
        // code here
        int sum=0;
        int ans=-1;
        for(auto &i:s)
        {
            if(i=='1')
            {
                sum++;
            }
        }
        if(sum==s.size())
        {
            return -1;
        }
        sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                sum++;
            }
            else
            {
                sum--;
            }
            if(sum<0)
            {
                sum=0;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};