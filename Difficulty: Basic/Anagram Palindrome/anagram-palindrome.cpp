class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        map<char,int>m;
        for(auto &i:s)
        {
            m[i]++;
        }
        int c=0;
        for(auto &i:m)
        {
            if(i.second%2!=0)
            {
                c++;
            }
        }
        if(c>1)
        {
            return false;
        }
        return true;
    }
};