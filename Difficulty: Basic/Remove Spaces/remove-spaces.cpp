class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string ans="";
        for(auto &i:s)
        {
            if(i!=' ')
            {
                ans+=i;
            }
        }
        return ans;
    }
};