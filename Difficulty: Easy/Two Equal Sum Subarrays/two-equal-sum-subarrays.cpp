class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        for(int i=1;i<arr.size();i++)
        {
            arr[i]=arr[i]+arr[i-1];
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==arr[arr.size()-1]-arr[i])
            {
                return true;
            }
        }
        return false;
    }
};
