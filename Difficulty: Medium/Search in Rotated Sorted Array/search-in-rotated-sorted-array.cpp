class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int l=0,h=arr.size()-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]==key)
            {
                return m;
            }
            if(arr[m]>=arr[l])
            {
                if(arr[l]<=key && arr[m]>=key)
                {
                    h=m-1;
                }
                else
                {
                    l=m+1;
                }
            }
            else
            {
                if(key>arr[m]&&key<=arr[h])
                {
                    l=m+1;
                }
                else
                {
                    h=m-1;
                }
            }
            // cout <<l
        }
        return -1;
    }
};