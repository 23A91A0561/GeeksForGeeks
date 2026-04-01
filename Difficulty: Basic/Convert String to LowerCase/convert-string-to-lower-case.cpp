// User function Template for C++

class Solution {
  public:
    string toLower(string& s) {
        // code here
        for(auto &i:s)
        {
            i=(i|' ');
        }
        return s;
    }
};