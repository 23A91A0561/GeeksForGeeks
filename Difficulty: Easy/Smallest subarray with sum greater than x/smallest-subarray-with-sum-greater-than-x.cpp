class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int ans=INT_MAX,l=0;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            while(sum>x)
            {
                ans=min(ans,i-l+1);
                sum-=arr[l];
                l++;
            }
            
        }
        if(ans==INT_MAX)
        {
            return 0;
        }
        return ans;
    }
};