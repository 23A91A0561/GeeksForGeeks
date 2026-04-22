class Solution {
  public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        for(int i=1;i<arr.size();i++)
        {
            arr[i]=arr[i-1]+arr[i];
        }
        vector<int>ans;
        for(auto &i:queries)
        {
            if(i[0]==0)
            {
                ans.push_back(arr[i[1]]/(i[1]-i[0]+1));
            }
            else
            {
                ans.push_back((arr[i[1]]-arr[i[0]-1])/(i[1]-i[0]+1));
            }
        }
        return ans;
    }
};