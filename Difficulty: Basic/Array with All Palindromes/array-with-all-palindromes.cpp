class Solution {
  public:
    bool check(int a)
    {
        int t=a;
        int c=0,b=0;
        while(t!=0)
        {
            c=t%10;
            b=b*10+c;
            t/=10;
        }
        return a==b;
    }
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(auto &i:arr)
        {
            if(!check(i))
            {
                return false;
            }
        }
        return true;
    }
};