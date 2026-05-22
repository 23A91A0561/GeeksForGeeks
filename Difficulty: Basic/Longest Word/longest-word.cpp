class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int ans=0;
        int Max=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i].size()>Max)
            {
                Max=arr[i].size();
                ans=i;
            }
        }
        return arr[ans];
    }
};
