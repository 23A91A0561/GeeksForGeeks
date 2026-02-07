class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int ans=0;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            ans+=i*arr[i];
        }
        int temp=ans;
        for(int i=1;i<n;i++)
        {
            ans=ans+sum-n*arr[n-i];
            temp=max(ans,temp);
        }
        return temp;
    }
};