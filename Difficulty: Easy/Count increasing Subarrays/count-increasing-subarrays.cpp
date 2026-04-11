class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here.
        int ans=0;
        int c=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                c++;
            }
            else
            {
                ans+=(c*(c-1))/2;
                c=1;
            }
        }
        ans+=(c*(c-1))/2;
        return ans;
    }
};
