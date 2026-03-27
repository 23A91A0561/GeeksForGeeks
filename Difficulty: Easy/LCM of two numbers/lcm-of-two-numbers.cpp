class Solution {
  public:
    int gcd(int a,int b)
    {
        if(b==0)
        {
            return a;
        }
        gcd(b,a%b);
    }
    int lcm(int a, int b) {
        // code here
        int Gcd=gcd(a,b);
        return (a*b)/Gcd;
    }
};