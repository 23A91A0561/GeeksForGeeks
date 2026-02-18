class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        // Code here
        int low=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int high=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        if(arr[low]!=x || arr[high-1]!=x)
        {
            return {-1};
        }
        return {low,high-1};
    }
};