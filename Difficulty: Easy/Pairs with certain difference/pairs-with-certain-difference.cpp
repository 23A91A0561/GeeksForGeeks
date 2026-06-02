class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int sum=0;
        for(int i=arr.size()-1;i>=1;i--)
        {
            if(arr[i]-arr[i-1]<k)
            {
                sum+=arr[i]+arr[i-1];
                i--;
            }
        }
        return sum;
    }
};