class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        int ans=-1;
        int l=0,h=arr.size()-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]==1)
            {
                h=m-1;
                ans=m;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};