class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        map<char,char>m,m1;
        for(int i=0;i<s1.size();i++)
        {
            if(m.find(s1[i])!=m.end() && m[s1[i]]!=s2[i])
            {
                return false;
            }
            else
            {
                m[s1[i]]=s2[i];
            }
        }
        for(int i=0;i<s1.size();i++)
        {
            if(m1.find(s2[i])!=m1.end() && m1[s2[i]]!=s1[i])
            {
                return false;
            }
            else
            {
                m1[s2[i]]=s1[i];
            }
        }
        
        return true;
    }
};