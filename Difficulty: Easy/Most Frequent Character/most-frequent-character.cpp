class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        map<char,int>m;
        for(auto &i:s)
        {
            m[i]++;
        }
        int Max=INT_MIN;
        char ans=' ';
        for(auto &i:m)
        {
            if(i.second>Max)
            {
                Max=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};