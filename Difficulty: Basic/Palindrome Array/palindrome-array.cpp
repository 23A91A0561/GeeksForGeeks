
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n/2;i++)
        {
            if(arr[i]!=arr[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
};
