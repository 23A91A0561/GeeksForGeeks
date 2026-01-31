class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        string s="";
        while(n>0)
        {
            s+=to_string(n%2);
            n/=2;
        }
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                ans=i;
                break;
            }
        }
        return ans+1;
    }
};