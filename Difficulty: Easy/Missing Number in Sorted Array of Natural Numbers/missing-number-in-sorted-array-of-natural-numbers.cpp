class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // Code here
        int l=0,h=arr.size()-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]==m+1)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return l+1;
    }
};