class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int l=0;
        int ans=0;
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            while(m[s[i]]>1)
            {
                m[s[l]]--;
                l++;
            }
            ans=max(i-l+1,ans);
        }
        return ans;
    }
};
