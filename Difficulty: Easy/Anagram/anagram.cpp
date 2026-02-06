class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        map<int,int>m;
        for(auto &i:s1)
        {
            m[i]++;
        }
        for(auto &i:s2)
        {
            m[i]--;
        }
        for(auto &i:m)
        {
            if(i.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};