class Solution {
  public:
    bool isBinaryPalindrome(int n) {
        // code here
        vector<int>v;
        while(n!=0)
        {
            v.push_back(n%2);
            n/=2;
        }
        for(int i=0;i<v.size()/2;i++)
        {
            if(v[i]!=v[v.size()-1-i])
            {
                return false;
            }
        }
        return true;
    }
};