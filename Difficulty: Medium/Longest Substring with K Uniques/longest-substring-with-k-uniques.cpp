class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int l=0;
        int ans=-1;
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            while(m.size()>k)
            {
                m[s[l]]--;
                if(m[s[l]]==0)
                {
                    m.erase(s[l]);
                }
                l++;
            }
            if(m.size()==k) ans=max(i-l+1,ans);
        }
        return ans;
    }
};