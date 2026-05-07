class Solution {
  public:
    vector<vector<int>>ans;
    void generate(vector<int>& subset,vector<int>& arr,int i)
    {
        if(i==arr.size())
        {
            ans.push_back(subset);
            return;
        }
        subset.push_back(arr[i]);
        generate(subset,arr,i+1);
        subset.pop_back();
        generate(subset,arr,i+1);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<int>temp={};
        generate(temp,arr,0);
        return ans;
    }
};