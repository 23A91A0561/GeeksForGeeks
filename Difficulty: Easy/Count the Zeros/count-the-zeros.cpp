// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int l=0,h=arr.size()-1;
        int ans=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]==0)
            {
                ans=m;
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return arr.size()-ans;
    }
};