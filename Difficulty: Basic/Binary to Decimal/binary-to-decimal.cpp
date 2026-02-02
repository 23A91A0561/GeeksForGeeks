class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        reverse(b.begin(),b.end());
        int sum=0;
        for(int i=0;i<b.size();i++)
        {
            sum+=(b[i]-'0')*pow(2,i);
        }
        return sum;
    }
};