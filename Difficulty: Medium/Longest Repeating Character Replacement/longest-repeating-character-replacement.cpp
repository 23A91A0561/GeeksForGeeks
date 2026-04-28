class Solution {
  public:
    int longestSubstr(string& s, int k) {
        // code here
        map<char,int>m;
        int l=0;
        int cur=0;
        int ans=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            cur=max(m[s[i]],cur);
            while(i-l+1-cur>k)
            {
                m[s[l]]--;
                if(m[s[l]]==0)
                {
                    m.erase(s[l]);
                }
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};