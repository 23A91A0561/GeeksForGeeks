class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int ans=1;
        int Max=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>=Max)
            {
                ans++;
                Max=arr[i];
            }
        }
        return ans;
    }
};