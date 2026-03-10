// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            arr[i]=sum/(i+1);
        }
        return arr;
    }
};