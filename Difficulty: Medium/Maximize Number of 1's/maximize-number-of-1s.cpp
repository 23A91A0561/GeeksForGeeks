class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int one=0;
        int zero=0;
        int l=0;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==1)
            {
                one++;
            }
            else
            {
                zero++;
            }
            while(zero>k)
            {
                if(arr[l]==0)
                {
                    zero--;
                }
                else
                {
                    one--;
                }
                l++;
            }
            ans=max(one+zero,ans);
        }
        return ans;
    }
};
