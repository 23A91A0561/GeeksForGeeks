class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int l=0,h=arr.size()-1;
        int Min=1000000,idx=0;
        while(l<h)
        {
            int m=l+(h-l)/2;
            if(arr[m]>arr[h])
            {
                l=m+1;
            }
            else
            {
                h=m;
            }
            
        }
        return l;
    }
};
