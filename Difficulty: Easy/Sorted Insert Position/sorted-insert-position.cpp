class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int l=0,h=arr.size()-1;
        int ans=0;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]==k)
            {
                return m;
            }
            else if(arr[m]<k)
            {
               
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return l;
    }
};