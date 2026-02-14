// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp=n;
        int c=0,sum=0;
        while(n!=0)
        {
            c=n%10;
            sum+=pow(c,3);
            n/=10;
        }
        return temp==sum;
    }
};