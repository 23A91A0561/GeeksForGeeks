class Solution {
  public:
    int minToggle(vector<int>& arr) {
        // code here
        int ans=INT_MAX;
        int left=0;
        int right=0;
        for(auto &i:arr)
        {
            if(i==0)
            {
                right++;
            }
        }
        for(auto &i:arr)
        {
            ans=min(right+left,ans);
            if(i==1)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        ans=min(right+left,ans);
        return ans;
    }
};