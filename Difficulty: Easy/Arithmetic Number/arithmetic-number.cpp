// User function Template for C++

class Solution {
  public:
    int inSequence(int a, int b, int c) {
        // code here
        for(int i=a;i<=b;i+=c)
        {
            if(i==b)
            {
                return true;
            }
        }
        return false;
    }
};