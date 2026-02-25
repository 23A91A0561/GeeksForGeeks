class Solution {
  public:
    vector<int>ans;
    void getsum(int i,vector<int>& arr,int sum)
    {
        if(i==arr.size())
        {
            ans.push_back(sum);
            return;
        }
        getsum(i+1,arr,sum+arr[i]);
        getsum(i+1,arr,sum);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        getsum(0,arr,0);
        return ans;
    }
};