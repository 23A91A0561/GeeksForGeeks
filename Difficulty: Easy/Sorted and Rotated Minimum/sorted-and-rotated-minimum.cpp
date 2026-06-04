class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int l=0,h=arr.size()-1;
        int ans=INT_MAX;
        int Min=INT_MAX;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(arr[m]<arr[h])
            {
                h=m-1;
                Min=min(Min,arr[m]);
            }
            else
            {
                Min=min(Min,arr[h]);
                l=m+1;
            }
        }
        return Min;
    }
};
