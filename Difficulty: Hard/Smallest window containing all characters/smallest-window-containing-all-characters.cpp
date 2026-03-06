class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        int l=0;
        for(auto &i:p)
        {
            m2[i]++;
        }
        int ans=INT_MAX;
        int count=0;
        int Max=0,Min=0;
        for(int i=0;i<s.size();i++)
        {
            if(m2.find(s[i])!=m2.end())
            {
                m1[s[i]]++;
                if(m1[s[i]]<=m2[s[i]])
                {
                    count++;
                }
            }
            while(count==p.size())
            {
                if(i-l+1<ans)
                {
                    ans=i-l+1;
                    Min=l;
                    Max=i;
                }
                
                
                if(m2.find(s[l])!=m2.end())
                {
                    m1[s[l]]--;
                    if(m1[s[l]]<m2[s[l]])
                    {
                        count--;
                    }
                }

                l++;
                
            }
        }
        if(ans==INT_MAX)
        {
            return "";
        }
        string a="";
        for(int i=Min;i<=Max;i++)
        {
            a+=s[i];
        }
        return a;
    }
};