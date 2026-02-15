class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int Min=INT_MAX;
        for(int i=0;i+m-1<a.size();i++)
        {
            Min=min(Min,a[i+m-1]-a[i]);
        }
        return Min;
    }
};