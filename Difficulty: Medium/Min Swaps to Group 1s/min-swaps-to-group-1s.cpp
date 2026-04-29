class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        // code here
        int ones=0;
        for(auto &i:arr)
        {
            if(i==1)
            {
                ones++;
            }
        }
        if(ones==0)
        {
            return -1;
        }
        int sum=0;
        for(int i=0;i<ones;i++)
        {
            sum+=arr[i];
        }
        int temp=sum;
        for(int i=ones;i<arr.size();i++)
        {
            sum=sum-arr[i-ones]+arr[i];
            temp=max(temp,sum);
        }
        return ones-temp;
    }
};