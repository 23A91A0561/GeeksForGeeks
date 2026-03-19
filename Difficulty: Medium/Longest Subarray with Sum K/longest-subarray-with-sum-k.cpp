class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>m;
        int sum=0;
        int Max=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==k)
            {
                Max=i+1;
            }
            if(m.find(sum-k)!=m.end())
            {
                Max=max(i-m[sum-k],Max);
            }
            if(m.find(sum)==m.end())
            {
                m[sum]=i;
            }
        }
        return Max;
    }
};